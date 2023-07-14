#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare int variable of height
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8); // we should check that height is not less than 1 or greater than 8

    for (int row = 0; row < height; row++) // print new line as row
    {
        for (int space = height - row - 1; space > 0; space--) // print sapce
        {
            printf(".");
        }
        for (int hash = 0; hash < row + 1; hash++) // print(#)
        {
            printf("#");
        }
        printf("\n");
    }
}