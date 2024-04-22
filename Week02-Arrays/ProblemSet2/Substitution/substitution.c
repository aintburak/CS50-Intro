#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 3000 

char alphabetUpper[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char alphabetLower[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char* encipher(const char* customAlphabet, const char* input);
int findIndexOf(const char* array, char a);
int check_duplicates(const char* key);

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if(strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for(int i = 0; i < 26; i++) {
        if(!isalpha(argv[1][i])) {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }
    }

    if (check_duplicates(argv[1])) {
        printf("Key must not contain duplicate characters.\n");
        return 1;
    }

    char* text = (char*)malloc(BUFFSIZE * sizeof(char));
    if (text == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    printf("plaintext: ");
    fgets(text, BUFFSIZE, stdin);
    text[strcspn(text, "\n")] = '\0';

    char* cipherText = encipher(argv[1], text);
    printf("ciphertext: %s\n", cipherText);
    
    free(text);
    free(cipherText);

    return 0;
}

char* encipher(const char* customAlphabet, const char* input) {
    int length = strlen(input);
    char* cipherText = (char*)malloc((length + 1) * sizeof(char));
    if (cipherText == NULL) {
        printf("Failed to allocate memory.\n");
        return NULL;
    }
    cipherText[length] = '\0';

    for(int i = 0; i < length; i++) {
        if(isalpha(input[i])) {
            int index = isupper(input[i]) ? findIndexOf(alphabetUpper, input[i]) : findIndexOf(alphabetLower, input[i]);
            cipherText[i] = isupper(input[i]) ? toupper(customAlphabet[index]) : tolower(customAlphabet[index]);
        } else {
            cipherText[i] = input[i];
        }
    }

    return cipherText;
}

int findIndexOf(const char* array, char a) {
    for (int i = 0; i < 26; i++) {
        if (array[i] == a) {
            return i;
        }
    }
    return -1;
}

int check_duplicates(const char* key) {
    int counts[26] = {0};
    for (int i = 0; i < 26; i++) {
        int index = tolower(key[i]) - 'a';
        if (++counts[index] > 1) {
            return 1; // Found a duplicate
        }
    }
    return 0; // No duplicates
}
