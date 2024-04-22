
# Caesar Cipher

![](https://cs50.harvard.edu/x/2024/psets/2/caesar/cipher.jpg)

## Introduction
The Caesar Cipher is one of the simplest encryption techniques. In this implementation, each letter in the plaintext is shifted by a certain number of places down or up the alphabet. This program takes a non-negative integer as a key for the shift and applies the Caesar cipher to encrypt a given plaintext.

## Compilation
Compile the program using the following command:
```
gcc -o caesar caesar.c
```

## Usage
Run the program with the key as the first command-line argument:
```
./caesar key
```
Where `key` is a non-negative integer. The program will then prompt for the plaintext and output the corresponding ciphertext.

## Input
- **Key**: A non-negative integer provided as a command-line argument.
- **Plaintext**: Text inputted by the user when prompted.

## Output
- **Ciphertext**: The encrypted version of the plaintext, displayed after the user inputs their text.

## Example
```
./caesar 1
plaintext: hello
ciphertext: ifmmp
```
This shifts each letter in "hello" by 1, producing "ifmmp".

## Notes
- Characters that are not letters (such as punctuation and spaces) are not encrypted and remain unchanged in the ciphertext.
- The program includes error handling for non-numeric keys and incorrect argument counts.

## References

Please visit [the official CS50 website (fall 2024)](https://cs50.harvard.edu/college/2024/fall/) to get more information about this problem.
