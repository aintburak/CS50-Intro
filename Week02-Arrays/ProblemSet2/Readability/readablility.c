#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define BUFFSIZE 3000 

void display_utils(char** s, int size);
int count_letters(char* text);
int count_words(char* text);
int count_sentences(char* text);

int main(void)
{
    
    char* text = (char*)malloc(BUFFSIZE * sizeof(char));
    // Prompt the user for some text
    printf("Text: ");
    fgets(text, BUFFSIZE, stdin); 
    printf("\nOutput : %s", text); 

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    // Compute the Coleman-Liau index
    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    // Print the grade level
    if (index < 1) {
        printf("Before Grade 1\n");
    } else if (index >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %d\n", index);
    }
    // Clean up allocated memory
    free(text);
    return 0;
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
            if(text[i] == ' ' || text[i] == '.' || text[i] == '!' || text[i] == '?' || text[i] == '1'
            || text[i] == '2' || text[i] == '3' || text[i] == '3' || text[i] == '4' || text[i] == '5'
            || text[i] == '6' || text[i] == '7' || text[i] == '8' || text[i] == '9' || text[i] == '0'
            || text[i] == ',') {
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


/*
You may assume that a sentence:

- will contain at least one word;
- will not start or end with a space; and
- will not have multiple spaces in a row.
*/

int count_sentences(char* text)
{
    // Return the number of sentences in text
    int i;
    int wordCount = 0; 
    int strSize = 0;
    int len = strlen(text);
    char** subString = (char**)malloc(len*sizeof(char*));
    char* index = (char*)malloc(len * sizeof(char));
    //allocate space for each string
    // here allocate 50 bytes, which is more than enough for the strings
    for(i = 0; i < len; i++){
        subString[i] = (char*)malloc(len*sizeof(char));
    }
     for(i = 0; i < len; i++){
        // If a normal character
        if(text[i] == '!' || text[i] == '.' || text[i] == '?') {
            //printf("\n");
            for(int k = 0; k < wordCount; k++) {
                    subString[strSize][k] = index[k];
                }
            wordCount = 0;
            strSize++;
        } else {
            //printf("%c",text[i]);
            // If a normal character
            index[wordCount] = text[i];
            wordCount++;
        }
    }

    //Free each string
    for(i = 0; i < 5; i++){
        free(subString[i]);
    }
    //finally release the first string
    free(subString);

    return strSize;
}

void display_utils(char** s, int size) {
    for (int i = 0; i < size; i++) {
            printf("%s", s[i]);
        printf("\n");
    }
}