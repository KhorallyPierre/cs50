#include <cs50.h>
#include <stdio.h>


void print_card_type(long int cardDigits);
int count_digits(long long cardNumber)
{
    int number_of_digits = 0;

    while (cardNumber !=0) {
        cardNumber = cardNumber / 10;
        number_of_digits++;
    }
    return number_of_digits;
}

int main(void)
{
    long int credit_card_number;

    {
        credit_card_number = get_long("what's your credit card number?: ");
    }

    printf("card number %ld\n", credit_card_number);
    // count_digits(credit_card_number);
    print_card_type(credit_card_number);

    return 0;
}

void print_card_type(long int cardDigits)
{
    int number_of_digits = count_digits(cardDigits);
    printf("nubmer of digits in card %i \n", number_of_digits );
    long int first_digits = cardDigits;
    printf("card digits %ld \n", cardDigits);
    while (first_digits >= 100)
    {
        first_digits = first_digits / 10;
    }
    printf("first digits %ld\n", first_digits);

    long int first_digit = cardDigits;
    while (first_digit >= 10)
    {
        first_digit = first_digit / 10;
    }
    printf("first digit %ld\n", first_digit);

    if (number_of_digits == 15 && (first_digits == 34 || first_digits == 37))
    {
        printf("American Express \n");
    }
    else if ( number_of_digits == 16 && (first_digits > 50 && first_digits < 56))
    {
        printf("MasterCard\n");
    }
    else if ((number_of_digits == 13 || number_of_digits == 14 || number_of_digits == 15 || number_of_digits == 16) && first_digit == 4)
    {
        printf("Visa\n");
    }
    else
    {
        printf("invalid card \n");
    }
}

// if the number is 15, it's american express
// if it's 16, it's mastercard
// if it's 13, 14, 15, ot 16, it's visa
// any other number it's invalid

// count the number of digits from any given card
