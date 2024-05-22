def main():
    # Prompt user for the amount of change owed
    while True:
        try:
            change = float(input("Change owed: "))
            if change >= 0:
                break
        except ValueError:
            continue

    # Convert dollars to cents
    cents = round(change * 100)
    
    # Initialize the coin counter
    coins = 0

    # Calculate the number of quarters
    coins += cents // 25
    cents %= 25  # Update cents to the remainder after quarters

    # Calculate the number of dimes
    coins += cents // 10
    cents %= 10  # Update cents to the remainder after dimes

    # Calculate the number of nickels
    coins += cents // 5
    cents %= 5  # Update cents to the remainder after nickels

    # Calculate the number of pennies
    coins += cents // 1
    # No need to update cents further as we are done

    # Print the total number of coins
    print(coins)

if __name__ == "__main__":
    main()
