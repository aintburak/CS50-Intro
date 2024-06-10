import csv
import sys

def main():
    # Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py database.csv sequence.txt")
        sys.exit(1)

    # Read database file into a variable
    with open(sys.argv[1], mode='r') as database_file:
        database_reader = csv.DictReader(database_file)
        individuals = list(database_reader)  # Store all data from the database

    # Read DNA sequence file into a variable
    with open(sys.argv[2], mode='r') as dna_file:
        dna_sequence = dna_file.read().strip()

    # Find longest match of each STR in DNA sequence
    str_counts = {}
    for str_seq in database_reader.fieldnames[1:]:  # Skip the first field which is 'name'
        str_counts[str_seq] = longest_match(dna_sequence, str_seq)

    # Check database for matching profiles
    for person in individuals:
        if all(int(person[str_seq]) == str_counts[str_seq] for str_seq in str_counts):
            print(person['name'])
            return

    print("No match")

def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequent in sequence."""
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length - subsequence_length + 1):  # Adjusted to prevent out-of-range error
        count = 0
        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        while True:
            start = i + count * subsequence_length
            end = start + subsequence_length
            if sequence[start:end] == subsequence:
                count += 1
            else:
                break
        longest_run = max(longest_run, count)

    return longest_run

if __name__ == "__main__":
    main()
