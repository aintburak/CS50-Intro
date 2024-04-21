#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
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
    printf("%d", argument);
    // Prompt user for plaintext

    // For each character in the plaintext:

        // Rotate the character if it's a letter
}