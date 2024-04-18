#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int n;
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while (n < 1);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print row of bricks
        int space = n - i - 1;  // Adjusted for correct alignment
        print_row(space, i + 1);
    }

    return 0;
}

void print_row(int spaces, int bricks)
{
    // print spaces
    for (int i = 0; i < spaces; i++)
    {
        // Print spaces
        printf(" ");
    }

    // Print bricks
    for (int i = 0; i < bricks; i++)
    {
        // Print row of bricks
        printf("#");
    }
    printf("\n");
}
