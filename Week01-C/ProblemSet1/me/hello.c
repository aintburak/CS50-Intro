#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* get_string = malloc(100);
    if (get_string == NULL) {
        printf("Failed to allocate memory.\n");
        return 1; // Exit if memory allocation fails
    }

    printf("What's your name? ");
    scanf("%99s", get_string); // Read a string with a maximum length of 99 characters
    printf("Hello, %s\n", get_string);

    free(get_string);
    return 0;
}
