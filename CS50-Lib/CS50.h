#ifndef CS50_H
#define CS50_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

// Define data types
typedef uint8_t BYTE;

// Define constants
#define BUFFER_SIZE 512
#define MAX_NAME_LENGTH 50

// Function prototypes
int get_int(const char *prompt);
float get_float(const char *prompt);
char *get_string(const char *prompt);
void clear_input_buffer(void);
bool file_exists(const char *filename);
bool is_valid_filename(const char *filename);
void copy_file(const char *source, const char *destination);
bool ends_with(const char *str, const char *suffix);

#endif
