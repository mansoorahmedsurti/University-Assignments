// Temperature Conversion Menu (Using Switch)
// Create a menu-driven program using a switch statement to:
// - Convert Celsius ↔ Fahrenheit.
// - Validate input and show 2 decimal precision.
// - Use escape sequences for formatted output.

#include <stdio.h>

int main()
{
    int choice;
    float initial_temperature, final_temperature;

    while (1)
    {
        printf("Input 1 if you would like to convert Celsius to Fahrenheit and 2 if you would like to convert Fahrenheit to Celsius:\t");
        scanf("%d", &choice);

        printf("Please input the initial temperature:\t");
        scanf("%f", &initial_temperature);

        switch (choice)
        {
        case 1: // C -> F
            final_temperature = initial_temperature * 1.8 + 32;
            printf("%.2fC = %.2fF", initial_temperature, final_temperature);
            break;
        case 2: // F -> C
            final_temperature = (initial_temperature - 32) / 1.8;
            printf("%.2fF = %.2fC", initial_temperature, final_temperature);
            break;
        }
        break;
    }

    return 0;
}