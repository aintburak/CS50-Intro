#include <stdio.h>
#include <math.h>

int getDigits(long int cardNumber);
void luhnsAlgorithm(long int cardNumber);
void printType(long int cardNumber);

int main(void) {
    long int cardNumber = 4003600000000014; // Example card number
    printf("Card Number: %ld\n", cardNumber);
    int digits = getDigits(cardNumber);
    printf("Digits: %d\n", digits);
    luhnsAlgorithm(cardNumber);
    printType(cardNumber);
    return 0;
}

int getDigits(long int cardNumber) {
    int count = 0;
    while (cardNumber > 0) {
        count++;
        cardNumber /= 10;
    }
    return count;
}

void luhnsAlgorithm(long int cardNumber) {
    int sum = 0;
    int digitCount = getDigits(cardNumber);
    int doubleDigit;

    // Process every second digit from the end
    for (int i = 0; i < digitCount; i++, cardNumber /= 10) {
        int digit = cardNumber % 10;
        if (i % 2 == 0) {
            sum += digit; // Sum of digits not multiplied by 2
        } else {
            doubleDigit = 2 * digit;
            sum += (doubleDigit > 9) ? (doubleDigit - 9) : doubleDigit;
        }
    }

    printf("Total Sum (Luhn's Check): %d\n", sum);
    if (sum % 10 == 0) {
        printf("Card is valid according to Luhn's Algorithm\n");
    } else {
        printf("Card is invalid\n");
    }
}

void printType(long int cardNumber) {
    int digits = getDigits(cardNumber);
    int firstTwoDigits = (cardNumber / (long int)pow(10, digits - 2));
    
    if (digits == 15 && (firstTwoDigits == 34 || firstTwoDigits == 37)) {
        printf("Type: American Express\n");
    } else if (digits == 16 && (firstTwoDigits >= 51 && firstTwoDigits <= 55)) {
        printf("Type: MasterCard\n");
    } else if ((digits == 13 || digits == 16) && (firstTwoDigits / 10 == 4)) {
        printf("Type: Visa\n");
    } else {
        printf("Unknown card type\n");
    }
}
