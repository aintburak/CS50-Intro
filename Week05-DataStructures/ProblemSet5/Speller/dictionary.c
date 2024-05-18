// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

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

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    int wordCount = 0;
    // Open the dictionary file
    FILE *file = fopen(dictionary, "r");
    if (file == NULL) {
        printf("Could not open %s.\n", dictionary);
        return false;
    }

    char word[MAX_WORD_LENGTH + 1]; // Buffer to hold each word

    /*
        Since maximum length for a word is 45 determined in dictionary.h
        (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)
    */

   while(fscanf(file, "%45s", world) != EOF) {

    // Allocate memory for a new node
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return false;
    }
    


   }
   
    // Close the dictionary file
    fclose(file);
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
