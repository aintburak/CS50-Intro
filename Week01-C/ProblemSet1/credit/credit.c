#include <stdio.h>

int everyOtherDigit(long int cardNumber);
void luhnsAlgorithm(long int cardNumber);
void printType(long int cardNumber);
int getDigits(long int cardNumber);

int main(void) {

    // get credit card info
    long int cardNumber = 4003600000000014; // 16-digit number
    do
    {
        //printf("Card Number: ");
        //scanf("%ld", &cardNumber);
        int digits = getDigits(cardNumber);
        printf("the number --> %ld \nsize --> %ld",cardNumber,sizeof(cardNumber));
        printf("\nDigits -- > %d",digits);
        luhnsAlgorithm(cardNumber);
    }
    while (cardNumber < 0);
}

int everyOtherDigit(long int cardNumber) {

}

int getDigits(long int cardNumber) {
    int count = 0;

    while(cardNumber > 0) {
        count++;
        cardNumber /= 10;
    }
    return count;

}


void luhnsAlgorithm(long int cardNumber) {
    int sum = 0;
    int lastDigit = 0;

   for( int i = 0; cardNumber > 0; i++) {
        lastDigit = cardNumber%10;
        printf("\n\n-> %d\n",lastDigit);
        if(i%2 != 0)  {
            sum += lastDigit;
        }

        
        
        printf("lastDigit = %d ~~~ cardnumber: %ld ~~~ Sum = %d\n",lastDigit,cardNumber,sum);

        cardNumber /= 10;
    }
    
}


void printType(long int cardNumber) {

}


