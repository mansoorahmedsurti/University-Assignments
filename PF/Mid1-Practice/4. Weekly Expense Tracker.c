// Weekly Expense Tracker
// Take 7 daily expense amounts using a loop.
// - Calculate total and average.
// - Warn if any day’s expense = 0.
// - Display 'Budget friendly' if avg < 500 else 'Overspending'.

#include <stdio.h>

int main()
{
    int day = 1, daily_expense, total_expense = 0;
    float average;

    while (day <= 7)
    {
        printf("Please input your expense for day %d:\t", day);
        scanf("%d", &daily_expense);
        total_expense += daily_expense;
        if (daily_expense == 0)
            printf("Warning, day %d's expense is 0", day);
        day++;
    }
    printf("Total Expense: %d\n", total_expense);
    average = total_expense / 7.0;
    printf("Average: %.2f.\n", average);

    if (average < 500)
        printf("Budget Friendly");
    else
        printf("Overspending");

    return 0;
}