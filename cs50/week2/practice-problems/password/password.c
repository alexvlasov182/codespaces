// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// Complete the Boolean function below

bool valid(string password)
{
    bool checkLower = false;
    bool checkUpper = false;
    bool checkNumber = false;
    bool checkSymbol = false;

    for (int i = 0; i < strlen(password); i++)
    {
        // Check if it a lower letter
        if (islower(password[i]))
        {
            checkLower = true;
        }

        // Check if it a upper letter
        if (isupper(password[i]))
        {
            checkUpper = true;
        }

        // Check if it a number
        if (isnumber(password[i]))
        {
            checkNumber = true;
        }

        // Check if it a symbol
        if (!isalnum(password[i]))
        {
            checkSymbol = true;
        }
    }

    if (checkLower == true && checkUpper && checkNumber && checkSymbol)
    {
        return true;
    }

    return false;
}