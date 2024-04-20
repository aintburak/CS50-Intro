# CS50-Intro 
## `CS50's Introduction to Computer Science`

<!-- TO DO -->



# CS50 Library

The CS50 Library is a collection of functions designed to simplify common tasks in C programming, especially for beginners. These functions provide additional functionality and abstractions to make programming in C easier and more intuitive.

## Usage

To use the CS50 Library in your C programs, follow these steps:

1. **Download the CS50 Library:** Download the `CS50.h` and `CS50.c` files from the CS50 GitHub repository or from the course materials.

2. **Include CS50.h in your C code:** At the top of your C file, include the `CS50.h` header file using the `#include` directive:

   ```c
   #include "CS50.h"
   ```

3. **Compile with CS50.c:** When compiling your program, make sure to include the `CS50.c` file in the compilation command. For example:

   ```bash
   gcc -o myprogram myprogram.c CS50.c
   ```

4. **Use CS50 Library Functions:** You can now use the functions provided by the CS50 Library in your C program. Refer to the function documentation for details on how to use each function.

## Functions

The CS50 Library provides the following functions:

- `int get_int(const char *prompt)`: Prompts the user for an integer input and returns the entered integer.
  
- `float get_float(const char *prompt)`: Prompts the user for a float input and returns the entered float.

- `char *get_string(const char *prompt)`: Prompts the user for a string input and returns the entered string.

- `void clear_input_buffer(void)`: Clears the input buffer, useful after reading input with `scanf`.

- `bool file_exists(const char *filename)`: Checks if a file exists in the current directory.

- `bool is_valid_filename(const char *filename)`: Checks if a filename is valid (for example, it does not contain invalid characters).

- `void copy_file(const char *source, const char *destination)`: Copies a file from a source path to a destination path.

- `bool ends_with(const char *str, const char *suffix)`: Checks if a string ends with a specified suffix.

## License

The CS50 Library is provided under the [MIT License](https://github.com/aintburak/CS50-Intro/blob/main/LICENSE). You are free to use, modify, and distribute the library as per the terms of the license.

## Credits

The CS50 Library is developed by the [Harvard University Computer Science Department](https://cs.harvard.edu/), particularly for use in the [CS50 Introduction to Computer Science](https://cs50.harvard.edu/) course.
