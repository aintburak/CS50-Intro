#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 3000 

char rotate(char c, int n);


int main(int argc, char* argv[])
{
    int i = 0;
    // Make sure program was run with just one command-line argument
    if (argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Make sure every character in argv[1] is a digit
    for(int i = 0, n = strlen(argv[1]); i < n; i++) {
        if(!isdigit(argv[1][i]) || argv[1][i] < 0) {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Convert argv[1] from a `string` to an `int`
    int argument = atoi(argv[1]);
    printf("\nArgument: %d", argument);
    
    // Create text field as pointer since we dont know the size of the text.
    char* text = (char*)malloc(BUFFSIZE * sizeof(char));
    if (text == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }
    
    // Prompt user for plaintext
    printf("\nText: ");
    fgets(text, BUFFSIZE, stdin);
    
    // whenever user enters prompt, the equivalent return string has been created 
    char* ciphertext = (char*)malloc(strlen(text) * sizeof(char));
    if (text == NULL) {
            printf("Failed to allocate memory.\n");
            return 1;
    }
    // For each character in the plaintext:


    for(i = 0; i < strlen(text) - 1; i++) { // due to end of char '\0'
            printf("%c",rotate(text[i],argument));
    }
/*
        // Rotate the character if it's a letter
        printf("\n\nA: %c --> %d\n\n", 'A', (int)'A');
        
        rotate('A', 1);
        printf("\n!#############!\n");
        rotate('!', 13);
        printf("\n!#############!\n");
        rotate('A', 27);
*/
        free(text);
        free(ciphertext);
        return 0;
}



char rotate(char c, int n) {
    int ascii;
    //printf("\n---------");
    //printf("\n'%c' : %d",c,(int)c);
    if(isalpha(c)) {
        // check if it is UPPERCASE
        if(isupper(c)) {
            // UPPERCASE: 65 ... 90
            ascii = ((int)c + n) % 91 > 65 ? (int)c + n : ((int)c + n) % 91 + 65;
        } else {
            // if lower case : 97 ... 122
            ascii = ((int)c + n) % 123 > 97 ? (int)c + n : ((int)c + n) % 123 + 97;
        }
    } else {
        return c;
    }

    // After rotation
    
    //printf("----> '%c' : %d\n",(char)ascii,ascii);
    //printf("---------\n");
    return (char)ascii;
}