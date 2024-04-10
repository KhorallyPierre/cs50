// Practice using structs
// Practice writing a linear search function

/**
 * Beach Burger Shack has the following 10 items on their menu
 * Burger: $9.5
 * Vegan Burger: $11
 * Hot Dog: $5
 * Cheese Dog: $7
 * Fries: $5
 * Cheese Fries: $6
 * Cold Pressed Juice: $7
 * Cold Brew: $3
 * Water: $2
 * Soda: $2
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

// Number of menu items
// Adjust this value (10) to number of items input below
#define NUM_ITEMS 10

// Menu items have item name and price
typedef struct
{
    string item;
    float price;
} menu_item;

// Array of menu items
menu_item menu[NUM_ITEMS];

// Add items to menu
void add_items(void);

// Calculate total cost
float get_cost(string item);

int main(void)
{
    add_items();

    printf("\nWelcome to Beach Burger Shack!\n");
    printf("Choose from the following menu to order. Press enter when done.\n\n");

    for (int i = 0; i < NUM_ITEMS; i++)
    {
        printf("%s: $%.2f\n", menu[i].item, menu[i].price);
    }
    printf("\n");

    float total = 0;
    while (true)
    {
        string item = get_string("Enter a food item: ");
        if (strlen(item) == 0)
        {
            printf("\n");
            break;
        }

        total += get_cost(item);
    }

    printf("Your total cost is: $%.2f\n", total);
}

// First is add_items which will add at least the first 4 items on the Beach Burger Shack menu.DONE
// Add at least the first four items to the menu array DONE
void add_items(void)
{
    menu[0].item = "Burger";
    menu[0].price = 9.5;
    menu[1].item = "Vegan Burger";
    menu[1].price = 11.0;
    menu[2].item = "Hot dog";
    menu[2].price = 5.0;
    menu[3].item = "Fries";
    menu[3].price = 5;
    menu[4].item = "Cheese Dog";
    menu[4].price = 7;
    menu[5].item = "Juice";
    menu[5].price = 4;
    menu[6].item = "Pizza";
    menu[6].price = 8.50;
    menu[7].item = "Popsicle";
    menu[7].price = 6.25;
}

// Search through the menu array to find an item's cost
//  Then you will complete get_cost which will
// implement a linear search algorithm
// to search for each item you choose, and return the corresponding price.
float get_cost(string item)
{

    string each_item_name;
    // search through menu array
    for (int i = 0; i < NUM_ITEMS; i++)
    {
        menu_item menu_item = menu[i];

        each_item_name = menu[i].item;

        float each_item_cost = menu[i].price;

        // use linear algorhitm to search for each item chosen, and return corresponding price.
        // this condition isn't working
        if (item == menu[i].item)
        {
            each_item_cost = menu[i].price;
        }

    }
    // printf("item ordered%s \n", item);
    return 0.0;
}
