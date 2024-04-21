
# CS50 Readability Challenge

## Overview
The Readability challenge from Harvard's CS50 course asks students to implement a program that calculates the reading level of a text using the Coleman-Liau index formula. This project helps students understand algorithms that focus on text analysis.

## Problem Description
The task is to write a program in C that can compute the grade level needed to understand the text. This is determined using the Coleman-Liau index formula:

The readability index is calculated using the Coleman-Liau formula, which is:

index = 0.0588 * L - 0.296 * S - 15.8

where:
- L is the average number of letters per 100 words in the text,
- S is the average number of sentences per 100 words in the text.

This index roughly corresponds to the US school grade level that would be capable of understanding the text.


The output should be a grade level, computed using the index formula. If the index number is 16 or higher, the output should be "Grade 16+". If the index number is less than 1, the output should be "Before Grade 1".

## Specifications
1. **count_letters**: A function to count the number of letters in the text.
2. **count_words**: A function to count the number of words in the text.
3. **count_sentences**: A function to count the number of sentences in the text.
4. The main program should read text until a newline is encountered, then output the grade level based on the computed index.

## Requirements
- Implement the program in a file named `readability.c`.
- Use the specified Coleman-Liau formula to calculate the reading level.
- Handle edge cases such as text with no sentences or non-standard punctuation.

## Example Usage
The program should work as follows:
```
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```

This challenge tests the ability to work with strings, implement algorithms, and understand basic text analysis in programming.

