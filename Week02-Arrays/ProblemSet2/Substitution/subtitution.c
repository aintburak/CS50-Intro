#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 3000 

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



    free(text);
    return 0;
}
