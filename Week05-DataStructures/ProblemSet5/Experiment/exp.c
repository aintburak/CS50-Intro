#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

#define N 26

int main() {
    char c;
    char word[N];
    int i = 0;
    char* filename = "text.txt";
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        while ((c = fgetc(file)) != EOF) {
            // Process the character read
            //printf("%c",c);
            word[i] = c;
            if(c == ' ') {
                printf("\n --> %s\n",word);
                break;
            }
            i++;
        }
        fclose(file);
    } else {
        // Handle file opening error
        printf("\nCould not opened file %s\n",filename);
    }
    return 0;
}