#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO Ask user to input their height of pyramid
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    // TODO print new line as a row
    for (int row = 0; row < height; row++)
    {
        // print spaces
        for (int space = height - row - 1; space > 0; space--)
        {
            printf(".");
        }

        // print hashes(#)
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }

        printf("..");
        // print right_hash pyramid
        for (int right_hash = 0; right_hash < row + 1; right_hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}