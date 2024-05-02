#include <stdio.h>


/*
    "n : %i\n", n prints the value of n.
    "&n : %p\n", &n prints the memory address of n.
    "*p: %i\n", *p should use %i (or %d) to print the integer value pointed to by p, which is n.
    "p: %p\n", p prints the memory address stored in p, which is the address of n.
    "&p: %p\n", &p prints the memory address of the pointer p itself.
*/


int main(void)
{
    int n = 50;
    int *p = &n;
    int *c = p;

    printf("n : %i\n", n);     // Correct: %i or %d can be used to print integer values.
    printf("&n : %p\n", &n);   // Correct: %p is used to print the address of 'n'.
    printf("*p: %i\n", *p);    // Correction needed: Use %i or %d to print the value pointed by 'p'.
    printf("p: %p\n", p);      // Correct: %p is used to print the address stored in 'p' (same as &n).
    printf("&p: %p\n", &p);    // Correct: %p is used to print the address of the pointer itself.

    printf("*c: %i\n", *c);
    printf("c: %p\n", c);  
    printf("&c: %p\n", &c);

}