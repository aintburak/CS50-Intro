// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

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
    int i;

    for(i = 0; i < N; i++) {
        
    }
    return false;
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

    char buffer[N];
    
    // Read each word in the file
    while(fscanf(file, "%s", buffer) != EOF) 
    {
        // Create and isolate newnode
        
        node* newnode = (struct node*)malloc(sizeof(node));
        if (new_node == NULL) {
            printf("Memory allocation failed.\n");
            fclose(file);
            return false;
        }
        // Add each word to the hash table

        strcpy(new_node->word, word);
        new_node->next = NULL;
        
        unsigned int index = hash(word);
        
        // Insert node into hash table at index
        if (hash_table[index] == NULL) {
            hash_table[index] = new_node;
        } else {
            new_node->next = hash_table[index];
            hash_table[index] = new_node;
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
    // TODO
    return false;
}
