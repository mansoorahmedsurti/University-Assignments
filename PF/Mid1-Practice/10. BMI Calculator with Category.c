// BMI (Body Mass Index) Calculator
// Input weight(kg) and height(m).
// - Compute BMI = weight / (height^2).
// - Use nested if-else to classify:
//   <18.5 → Underweight
//   18.5–24.9 → Normal
//   25–29.9 → Overweight
//   ≥30 → Obese
// - Validate inputs and show results neatly.

#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Please input your weight(in kg) and height(in m):\t");
    scanf("%f %f", &weight, &height);

    if (weight > 0 && height > 0)
    {
        bmi = weight / (height * height);

        printf("\nYour BMI is: %.2f\n", bmi);

        if (bmi < 18.5)
            printf("Category: Underweight\n");
        else if (bmi >= 18.5 && bmi <= 24.9)
            printf("Category: Normal\n");
        else if (bmi >= 25 && bmi <= 29.9)
            printf("Category: Overweight\n");
        else
            printf("Category: Obese\n");
    }
    else
    {
        printf("Invalid input. Weight and height must be positive values.\n");
    }

    return 0;
}