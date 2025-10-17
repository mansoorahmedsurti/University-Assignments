#include <stdio.h>

int main()
{
    int numbers[10];
    int greatest; 
    int lowest;   

    
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
    
        scanf("%d", &numbers[i]);
    }

    greatest = numbers[0];
    lowest = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > greatest)
        {
            greatest = numbers[i];
        }

        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }

    printf("Greatest: %d.\n", greatest);
    printf("Lowest: %d.\n", lowest);
    printf("The difference between them would be %d.\n", greatest - lowest);

    return 0;
}