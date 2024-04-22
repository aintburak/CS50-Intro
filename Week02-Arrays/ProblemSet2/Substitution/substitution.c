#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 3000 

char alphabetUpper[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char alphabetLower[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


char* encipher(char* customAlphabet, char* input);
int findIndexOf(char* array,char a);

int main(int argc, char* argv[]) {
    int i;
    // Check if it takes more than 2 args
    if (argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // Check if argument is not 26 chars
    if(strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    } else {
        for(int i = 0; i < 26; i++) {
            if(!isalpha(argv[1][i])) {
                printf("Key must only contain alphabetic characters.\n");
                return 1;
            }
        }
    }
    // Create text field as pointer since we dont know the size of the text.
    char* text = (char*)malloc(BUFFSIZE * sizeof(char));
    if (text == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }
    // Prompt user for plaintext
    printf("plaintext: ");
    fgets(text, BUFFSIZE, stdin);
    //printf("argv[1]: %s \ntext: %s\nstrlen(argv[1]) %d", argv[1],text,strlen(argv[1]));
    encipher(argv[1],text);  

    free(text);
    return 0;
}

// function returns encrypted the input text given
char* encipher(char* customAlphabet, char* input) {
    int i;
    int length = strlen(input);

    char* cipherText = (char*)malloc((length + 1) * sizeof(char)); // +1 for the null terminator
    if (cipherText == NULL) {
        printf("Failed to allocate memory.\n");
        return NULL;
    }
    cipherText[length] = '\0'; // Null-terminate the string

    for(i = 0; i < length; i++) {
        if(isalpha(input[i])) {
            // if char is alphabetic, change it
            int index = isupper(input[i]) ? findIndexOf(alphabetUpper,input[i]) : findIndexOf(alphabetLower,input[i]);
            cipherText[i] = customAlphabet[index];
        } else {
            // if its not alphabetic, keep the same, DONT change it.
            cipherText[i] = input[i]; 
        }
    }
    printf("ciphertext: %s", cipherText);
    return cipherText;
}

// this method finds the index of the character we're looking for within a given string/array.
int findIndexOf(char* array,char a) {
    int i,j;
    int length = strlen(array);
    for(i = 0; i < length; i++) {
        if(array[i] == a) { // successfully finds it inside the array
            return i;
        }
    }
}

