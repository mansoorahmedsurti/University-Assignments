// Input deposit amount.
// - Use nested if-else for interest:
// <2000 → 3%
// 2000–10000 → 5%
// >10000 → 8%
// - Calculate interest and total balance.
// - Validate deposit > 0.

#include <stdio.h>

int main()
{
    int deposit_amount;
    float interest, balance;

    printf("Please Input deposit amount:\t");
    scanf("%d", &deposit_amount);

    if (deposit_amount > 0)
    {
        if (deposit_amount < 2000)
        {
            interest = 3 * deposit_amount / 100.0;
            balance = deposit_amount + interest;
        }
        else if (deposit_amount >= 2000 && deposit_amount <= 10000)
        {
            interest = 5 * deposit_amount / 100.0;
            balance = deposit_amount + interest;
        }
        else if (deposit_amount > 10000)
        {
            interest = 8 * deposit_amount / 100.0;
            balance = deposit_amount + interest;
        }
        else
            printf("Please Input a valid number");
        printf("Interest Amount: %.2f \nBalance: %.2f", interest, balance);
    }
    else
        printf("Please Input a positive number");

    return 0;
}