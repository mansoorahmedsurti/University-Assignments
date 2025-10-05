//  Library Late Fee Calculator
// Ask for number of days late.
// - Use nested if-else to apply fees:
// 1–5 days: Rs.2/day
// 6–10 days: Rs.3/day
// >10 days: Rs.5/day
// - Display total fine or 'Invalid input'.

#include <stdio.h>

int main()
{
    int days_late, total_fine;

    printf("Enter number of days late:\t");
    scanf("%d", &days_late);

    if (days_late >= 1 && days_late <= 5)
    {
        total_fine = days_late * 2;
        printf("Total Fine: Rs%d", total_fine);
    }

    else if (days_late >= 6 && days_late <= 10)
    {
        total_fine = days_late * 3;
        printf("Total Fine: Rs%d", total_fine);
    }
    else if (days_late > 10)
    {
        total_fine = days_late * 5;
        printf("Total Fine: Rs%d", total_fine);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}