# Substitution

## Introduction
The Substitution Cipher is a method of encryption by which units of plaintext are replaced with ciphertext according to a fixed system; the "units" may be single letters, pairs of letters, triplets of letters, mixtures of the above, and so forth. This program implements a simple substitution cipher where each letter in the plaintext is replaced by a letter at a fixed position in a user-defined key.

## Compilation
Compile the program using the following command:
```
gcc -o substitution substitution.c
```

## Usage
Run the program with the substitution key as the first command-line argument:
```
./substitution key
```
The key should contain 26 unique alphabetic characters, representing the substitution for each alphabet from 'A' to 'Z'.

## Input
- **Key**: A string of 26 unique alphabetic characters used as the substitution key.
- **Plaintext**: Text inputted by the user when prompted.

## Output
- **Ciphertext**: The encrypted version of the plaintext, displayed after the user inputs their text.

## Example
```
./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI
plaintext: hello
ciphertext: jrssb
```
This uses the provided key to substitute each letter in "hello" to produce "jrssb".

## Notes
- Only alphabetic characters are substituted; non-alphabetic characters remain unchanged.
- The program includes error handling for invalid keys (non-unique characters, incorrect length, non-alphabetic characters).

## References

Please visit [the official CS50 website (fall 2024)](https://cs50.harvard.edu/college/2024/fall/) to get more information about this problem.
