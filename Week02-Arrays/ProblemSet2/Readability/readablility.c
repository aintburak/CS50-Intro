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
    char* text = (char*)malloc(BUFFSIZE * sizeof(char));
    // Prompt the user for some text
    printf("Text: ");
    fgets(text, BUFFSIZE, stdin); 
    printf("\nOutput : %s", text); 
    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    printf("%d", letters);



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
}

int count_sentences(char* text)
{
    // Return the number of sentences in text
}