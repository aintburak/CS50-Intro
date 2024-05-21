def main():
    # Prompt the user for the height of the pyramid
    while True:
        height = input("Height: ")
        if height.isdigit():
            height = int(height)
            if 0 < height <= 8:
                break

    # Print the pyramid
    for i in range(1, height + 1):
        print(" " * (height - i) + "#" * i)


if __name__ == "__main__":
    main()
