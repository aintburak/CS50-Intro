#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 3000 

char* encipher(char* str);

int main(int argc, char* argv[]) {
    
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
    printf("\n-----------\n");
    encipher(argv[1]);


    free(text);
    return 0;
}


char* encipher(char* str) {
    int i;
    int length = strlen(str); // expecting 26

    char* cipher = (char*)malloc(strlen(str) * sizeof(char));
    if (cipher == NULL) {
        printf("Failed to allocate memory.\n");
        return '\0';
    }

    for(i = 0; i < length; i++) {
        printf("%c",str[i]);
        if(isalpha(str[i]) {
            // if char is alphabetic
            

        } else {
            // not alphabetic

        }
        
        
        )
    }


    free(cipher); // release cipher

    return cipher;
}


