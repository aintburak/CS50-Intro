#include "CS50.h"

// Function implementations for CS50, please note that this is not original CS50.c implementation.
// You can refer to original CS50 website to get more information.

int get_int(const char *prompt)
{
    int n;
    printf("%s", prompt);
    scanf("%d", &n);
    return n;
}

float get_float(const char *prompt)
{
    float n;
    printf("%s", prompt);
    scanf("%f", &n);
    return n;
}

char *get_string(const char *prompt)
{
    char *str = malloc(MAX_NAME_LENGTH * sizeof(char));
    printf("%s", prompt);
    scanf("%s", str);
    return str;
}

void clear_input_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

bool file_exists(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file)
    {
        fclose(file);
        return true;
    }
    return false;
}

bool is_valid_filename(const char *filename)
{
    // Validation logic for filename
    // Check if filename contains invalid characters or is too long
    // For simplicity, let's assume any non-empty filename is valid
    return strlen(filename) > 0;
}

void copy_file(const char *source, const char *destination)
{
    FILE *source_file = fopen(source, "rb");
    FILE *destination_file = fopen(destination, "wb");
    if (source_file && destination_file)
    {
        char buffer[BUFFER_SIZE];
        size_t bytes_read;
        while ((bytes_read = fread(buffer, sizeof(char), BUFFER_SIZE, source_file)) > 0)
        {
            fwrite(buffer, sizeof(char), bytes_read, destination_file);
        }
        fclose(source_file);
        fclose(destination_file);
    }
}

bool ends_with(const char *str, const char *suffix)
{
    size_t str_len = strlen(str);
    size_t suffix_len = strlen(suffix);
    if (str_len < suffix_len)
    {
        return false;
    }
    return (strcmp(str + str_len - suffix_len, suffix) == 0);
}
