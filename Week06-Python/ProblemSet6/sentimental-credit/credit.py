def promtUser():
    # Prompt user for the amount of change owed
    while True:
        try:
            cardNumber = str(input("Number: "))
            if int(cardNumber) >= 0:
                break
        except ValueError:
            continue
    return cardNumber


def returnEveryOtherDigit(cardNumber):
    # Use slicing to get every other digit
    return str(cardNumber)[-2::-2]


def luhnsAlgorithm(cardNumber):
    # Luhn's Algorithm
    everyOtherDigit = returnEveryOtherDigit(cardNumber)
    print(everyOtherDigit)
    

def main():
    cardNumber = promtUser()
    luhnsAlgorithm(cardNumber)



if __name__ == "__main__":
    main()
