// Simple Interest Table
// Input principal, rate, years.
// - Use for loop to display year-wise simple interest table.
// - Validate inputs and show 2 decimal precision.

#include <stdio.h>

int main()
{
    int i, years;
    float interest, principal, rate;

    printf("Please input principal, rate and years of interest.");
    scanf("%f %f %d", &principal, &rate, &years);

    if (principal > 0 && rate > 0 && years > 0)
    {

        for (i = 1; i <= years; i++)
        {
            interest = (principal * rate * i) / 100.00;
            printf("%d year -- Rs%.2f \n", i, interest);
        }
    }
    else
        printf("Please input positive value(s).");
    return 0;
}