// Simple Electricity Bill Calculator
// Write a C program that:
// - Takes units consumed as input.
// - Uses nested if-else to apply rate slabs:
// <100 units → Rs.5/unit
// 100–300 units → Rs.7/unit
// >300 units → Rs.10/unit
// - Displays total bill with 2 decimal precision.
// - Validates negative input.

#include <stdio.h>

int main()
{
    float bill;
    int units;

    printf("Please Input units used: \t");
    scanf("%d", &units);

    if (units < 100)
    {
        bill = units * 5;
        printf("%.2f", bill);
    }
    else if (units >= 100 && units <= 300)
    {
        bill = 100 * 5 + (units - 100) * 7;
        printf("%.2f", bill);
    }
    else if (units > 300)
    {
        bill = 100 * 5 + 200 * 7 + (units - 300) * 10;
        printf("%.2f", bill);
    }
    else
    {
        printf("Please Input a positive number");
    }
    return 0;
}