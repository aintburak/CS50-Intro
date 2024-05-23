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

def returnRemainingDigit(cardNumber):
    # Use slicing to get every other digit
    return str(cardNumber)[-1::-2]

def sumDigits(number):
    total_sum = 0
    # Iterate over each digit of the number
    for digit_char in str(number):
        # Convert the digit character to an integer and add it to the total sum
        total_sum += int(digit_char)
    
    return total_sum


def luhnsAlgorithm(cardNumber):
    # Luhn's Algorithm
    sum = 0
    everyOtherDigit = str(returnEveryOtherDigit(cardNumber))
    for i in everyOtherDigit:
        sum+= sumDigits(2*int(i))
    
    remainingDigit = returnRemainingDigit(cardNumber)
    
    for j in remainingDigit:
        sum+= int(j)
    

    if sum % 10 == 0:
        return True
    else:
        return False


def getCardType(cardNumber):
    # Check the card type based on its prefix and length
    if cardNumber.startswith(('51', '52', '53', '54', '55')) and len(cardNumber) == 16:
        return "MASTERCARD"
    elif cardNumber.startswith(('34', '37')) and len(cardNumber) == 15:
        return "AMEX"
    elif cardNumber.startswith('4') and len(cardNumber) in {13, 16}:
        return "VISA"
    else:
        return "INVALID"

def main():
    cardNumber = "4003600000000014"
    # print(luhnsAlgorithm(cardNumber))
        
    # Check if the card number is valid according to Luhn's Algorithm
    if luhnsAlgorithm(cardNumber):
        # Get the card type
        cardType = getCardType(cardNumber)
        print(cardType)
    else:
        print("INVALID")



if __name__ == "__main__":
    main()
