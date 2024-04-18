#include <stdio.h>

int calculate_quarters(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        printf("Change owed: ");
        scanf("%d", &cents);
    }
    while (cents < 0);
    cents = calculate_quarters(cents);
    // printf("\n\n-total: %d-\n\n", cents);
    printf("%d\n",cents);
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    int c25 = 0,c10 = 0 ,c5 = 0 ,c1 = 0;
    while (cents > 0)
    {
        if(cents >= 25) {
            quarters++;
            c25++;
            cents = cents - 25;
            // printf("Times 25 cents are used : - %d\n", c25);
        } else if(cents >= 10) {
            quarters++;
            c10++;
            cents = cents - 10;
            // printf("Times 10 cents are used : - %d\n", c10);

        } else if(cents >= 5) {
            quarters++;
            c5++;
            cents = cents - 5;
            // printf("Times 5 cents are used : - %d\n", c5);

        } else {
            // Evaluate 1 cents in else part
            quarters++;
            c1++;
            cents = cents - 1;
            // printf("Times 1 cents are used : - %d\n", c1); the commented parts just for debug :D
        }

    }
    return quarters;
}
