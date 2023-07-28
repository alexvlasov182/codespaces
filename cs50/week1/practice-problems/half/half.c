// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float tax_decimal = tax / 100.0;
    float tip_decimal = tip / 100.0;
    
    // Calcualate the total amount with tax
    float total_amount_with_tax = bill * (1.0 + tax_decimal);
    
    // Calculate the total amount with tip
    float total_amount_with_tip = total_amount_with_tax * (1.0 + tip_decimal);
    
    float final_amount = total_amount_with_tip / 2;
    
    return final_amount;
}
