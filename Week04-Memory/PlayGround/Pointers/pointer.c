#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
   

    printf("n : %i\n", n);     // Correct: %i or %d can be used to print integer values.
    printf("&n : %p\n", &n);   // Correct: %p is used to print the address of 'n'.
    printf("*p: %i\n", *p);    // Correction needed: Use %i or %d to print the value pointed by 'p'.
    printf("p: %p\n", p);      // Correct: %p is used to print the address stored in 'p' (same as &n).
    printf("&p: %p\n", &p);    // Correct: %p is used to print the address of the pointer itself.
    
}