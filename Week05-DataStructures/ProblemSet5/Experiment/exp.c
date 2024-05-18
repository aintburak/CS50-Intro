#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

int main() {
    char c;
    char* filename = "text.txt";
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        while ((c = fgetc(file)) != EOF) {
            // Process the character read
            printf("%c",c);
            if(c == '\0')
                printf(" -- ");
        }
        fclose(file);
    } else {
        // Handle file opening error
        printf("\nCould not opened file %s\n",filename);
    }
    return 0;
}