# Plurality Vote System

## Introduction
This program simulates a plurality voting system where each voter gets to vote for one candidate. At the end of the voting process, the candidate(s) with the most votes is declared the winner.

## Usage
To use this program, you need to pass the names of all candidates as command line arguments when running the program. For example:

```bash
./plurality Alice Bob Charlie
```

## Requirements
You should have the CS50 Library installed on your machine to compile and run this program. The CS50 Library provides functions like `get_string` and `get_int`.

## Compilation
To compile the program, use the following command:

```bash
clang -o plurality plurality.c -lcs50
```

## Running the Program
Once compiled, you can run the program by specifying the candidates as arguments:

```bash
./plurality Alice Bob Charlie
```

You will then be prompted to enter the number of voters and the name of the candidate each voter wishes to vote for.

## How It Works
The program includes functions to handle voting and to print the winner:

- `vote(string name)`: Checks if the name is one of the candidates and updates the vote count.
- `print_winner()`: Determines which candidate(s) have the most votes and prints their name(s).

## License
This project is provided for educational purposes and is free to use under the MIT license.
