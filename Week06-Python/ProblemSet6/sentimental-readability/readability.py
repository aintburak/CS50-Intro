def count_letters(text):
    # Count letters (a-z and A-Z)
    return sum([1 for char in text if char.isalpha()])

def count_words(text):
    # Count words by splitting the text on spaces
    return len(text.split())

def count_sentences(text):
    # Count sentences by the occurrence of ., !, or ?
    return sum([1 for char in text if char in '.!?'])

def compute_index(text):
    # Count letters, words, and sentences in the text
    letters = count_letters(text)
    words = count_words(text)
    sentences = count_sentences(text)
    
    # Calculate L and S for the Coleman-Liau index
    L = (letters / words) * 100
    S = (sentences / words) * 100
    
    # Compute the Coleman-Liau index
    index = 0.0588 * L - 0.296 * S - 15.8
    return round(index)

def main():
    text = input("Text: ")
    grade = compute_index(text)
    
    # Determine the appropriate grade level or range to print
    if grade >= 16:
        print("Grade 16+")
    elif grade < 1:
        print("Before Grade 1")
    else:
        print(f"Grade {grade}")

if __name__ == "__main__":
    main()
