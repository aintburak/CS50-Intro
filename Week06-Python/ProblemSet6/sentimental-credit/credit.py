def promtUser():
    # Prompt user for the amount of change owed
    while True:
        try:
            cardNumber = int(input("Number: "))
            if cardNumber >= 0:
                break
        except ValueError:
            continue
    return cardNumber




def luhnsAlgorithm(cardNumber):
    # Luhn's Algorithm
    for i in str(cardNumber):
        print(i)

def main():
    numb = promtUser()
    print(f"{numb}")
    luhnsAlgorithm(numb)



if __name__ == "__main__":
    main()
