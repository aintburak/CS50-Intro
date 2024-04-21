#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define BUFFSIZE 3000 


int count_letters(char* text);
int count_words(char* text);
int count_sentences(char* text);

int main(void)
{
    /*
    char* text = (char*)malloc(BUFFSIZE * sizeof(char));
    // Prompt the user for some text
    printf("Text: ");
    fgets(text, BUFFSIZE, stdin); 
    printf("\nOutput : %s", text); 
    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    printf("%d", letters);
    */
    char* text = "Burak has gone for fishing. He have seen a beautiful sightseeing.";
    printf("\nOutput : %s\n", text);
    //int words = count_words(text);
    //printf("\n%d", words);
    int sentences = count_sentences(text);
    printf("\n\n # of sentences ->  %d ", sentences);
    // Compute the Coleman-Liau index

    // Print the grade level
}


int count_letters(char* text)
{
    // Return the number of letters in text
    int len = strlen(text);
    int count = 0;

    for(int i = 0; i < len; i++){
        if(isalpha(text[i])) count++;
    }
    return count;
}

int count_words(char* text)
{
    // Return the number of words in text
    int len = strlen(text);
    int i = 0;

    // 2 dimentional pointer array hence we dont even know any size and how many words do we have.
    char **strings = (char**)malloc(len*sizeof(char*));
    char* index = (char*)malloc(len/2 * sizeof(char));
    int indexLen = 0;
    int strSize = 0;
    //allocate space for each string
    // here allocate 50 bytes, which is more than enough for the strings
    for(i = 0; i < len; i++){
        strings[i] = (char*)malloc(100*sizeof(char));
    }

    for(i = 0; i < len; i++){
            if(text[i] == ' ' || text[i] == '.' || text[i] == '!' || text[i] == '?') {
                //if character is one of placeholders above.
                strings[strSize] = (char*)malloc(indexLen*sizeof(char));
                // copy index to an element of array
                for(int k = 0; k < indexLen; k++) {
                    strings[strSize][k] = index[k];
                }
                indexLen = 0;
                strSize++;
            } else {
                // If a normal character
                index[indexLen] = text[i];
                indexLen++;
            }
    }
    
    /*
    // Print it out, u may use display_utils metod below to illustrate each element.
    for(i = 0; i < strSize; i++){
        printf("Line #%d(length: %lu): %s\n", i, strlen(strings[i]),strings[i]);
    } 
    */
    //Free each string
    for(i = 0; i < 5; i++){
        free(strings[i]);
    }
    //finally release the first string
    free(strings);

    return strSize;
}

int count_sentences(char* text)
{
    // Return the number of sentences in text
    int i;
    int count = 0;
    int len = strlen(text);

     for(i = 0; i < len; i++){
            if(text[i] == ' ' || text[i] == '.' || text[i] == '!' || text[i] == '?') {
                printf("-");
            } else {
                // If a normal character
                printf("%c", text[i]);
            }
    }
    return count;
}

void display_utils(char** s) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", s[i][j]);
        }
        printf("\n");
    }
}