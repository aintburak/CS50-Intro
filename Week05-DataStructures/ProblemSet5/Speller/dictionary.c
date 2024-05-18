// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>  // Include for strcasecmp

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];
unsigned int wordCount = 0; // Global variable to track the number of words loaded


// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Hash the word to find the appropriate bucket
    unsigned int index = hash(word);
    
    // Traverse the linked list at this index
    node *cursor = table[index];
    while (cursor != NULL)
    {
        // Compare the word with the word in the current node, case-insensitively
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    
    return false; // Word not found
}


// Hashes word to a number
unsigned int hash(const char *word)
{
    return toupper(word[0]) - 'A';
}



// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open the dictionary file
    FILE *file = fopen(dictionary, "r");
    if( file == NULL) 
    {
        printf("File could not be opened.\n");
        return false;
    }

    char buffer[LENGTH + 1];
    
    // Read each word in the file
    while(fscanf(file, "%s", buffer) != EOF) 
    {
        // Create and isolate newnode
        
        node* newnode = (struct node*)malloc(sizeof(node));
        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            fclose(file);
            return false;
        }
        // Add each word to the hash table

        strcpy(newnode->word, word);
        newnode->next = NULL;
        
        unsigned int index = hash(word);
        
        // Insert node into hash table at index
        if (table[index] == NULL) {
            table[index] = newnode;
        } else {
            newnode->next = table[index];
            table[index] = newnode;
        }

        wordCount++; // Increment word count
    }


    // Close the dictionary file
    fclose(file);

    return true;
}



// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return wordCount;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    unsigned int i;
    // Iterate over each bucket
    for (i = 0; i < N; i++)
    {
        // Traverse the linked list at table[i]
        node *cursor = table[i];
        while (cursor != NULL)
        {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
    }

    return true;
}