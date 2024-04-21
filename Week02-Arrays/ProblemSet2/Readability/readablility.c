#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 3000 

int count_letters(char* text);
int count_words(char* text);
int count_sentences(char* text);

int main(void) {
    char* text = (char*)malloc(BUFFSIZE * sizeof(char));
    if (text == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    // Prompt the user for some text
    printf("Text: ");
    fgets(text, BUFFSIZE, stdin);

    // Trim newline character read by fgets
    text[strcspn(text, "\n")] = 0;

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

int count_letters(char* text) {
    int count = 0;
    while (*text) {
        if (isalpha(*text)) count++;
        text++;
    }
    return count;
}

int count_words(char* text) {
    int words = 0;
    char* token = strtok(text, " ");
    while (token != NULL) {
        words++;
        token = strtok(NULL, " ");
    }
    return words;
}

int count_sentences(char* text) {
    int sentences = 0;
    while (*text) {
        if (*text == '.' || *text == '?' || *text == '!') {
            sentences++;
        }
        text++;
    }
    return sentences;
}
