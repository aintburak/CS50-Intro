#include <stdio.h>

void print_row_reverse(int spaces, int bricks);

int main(void)
{
    int n;
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while ((n < 1) || (n > 8));

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print row of bricks
        int space = n - i - 1;  // Adjusted for correct alignment
        print_row_reverse(space, i + 1);
    }

    return 0;
}

void print_row_reverse(int spaces, int bricks)
{
    // Print leading spaces
    for (int i = 0; i < spaces; i++)
    {
        putchar(' ');
    }

    // Print both sets of bricks and the separator in one loop
    for (int i = 0; i < 2 * bricks + 2; i++)
    {
        if (i == bricks) {
            printf("  "); // Print separator exactly after the first set of bricks
        }
        if (i < bricks || i >= bricks + 2) { // Avoid printing bricks over the separator
            putchar('#');
        }
    }

    putchar('\n');
}