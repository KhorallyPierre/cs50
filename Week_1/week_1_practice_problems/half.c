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
    float taxTotal = (tax / 100) * bill;
    printf("tax total is %.2f \n", taxTotal);

    float tipTotal = (tip / 100.0) * (bill + taxTotal);
    float fraction = (bill + taxTotal);
    printf("bill added to tax is %.2f \n", fraction);
     printf("tip total is %.2f \n", tipTotal);

    float billTotal= (tipTotal + taxTotal + bill);
     printf("bill total is %.2f \n", billTotal);
    return billTotal/2;
}
