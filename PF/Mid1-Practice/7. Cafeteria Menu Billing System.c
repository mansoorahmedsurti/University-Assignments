// Cafeteria Menu Billing System
// Using switch, design a menu:
// 1. Tea (Rs.50)
// 2. Burger (Rs.150)
// 3. Pizza (Rs.300)
// 4. Sandwich (Rs.100)
// - Take choice and quantity.
// - Validate and display total bill.

#include <stdio.h>

int main()
{
    int menu_choice, quantity, total_bill = 0;

    while (1)
    {
        printf("--Menu--\nPress the following digits for the corresponding items: \n 1. Tea (Rs.50) \n 2. Burger (Rs.150) \n 3. Pizza (Rs.300) \n 4. Sandwich (Rs.100) \n 5. That's All(Exit the Menu) \n");
        scanf("%d", &menu_choice);

        if (menu_choice == 5)
            break;

        printf("Please also input the quantity of selected item: \t");
        scanf("%d", &quantity);

        switch (menu_choice)
        {
        case 1:
            total_bill += quantity * 50;
            break;
        case 2:
            total_bill += quantity * 150;
            break;
        case 3:
            total_bill += quantity * 300;
            break;
        case 4:
            total_bill += quantity * 100;
            break;
        default:
            printf("Please Input a valid number between 1-5.");
        }
    }
    printf("Your Total Bill is Rs.%d", total_bill);

    return 0;
}