// 1)Write a C program that takes 5 integers in an array and shifts all elements one position to the right, and moves the last element to the first position.
// Example:
// Input → 1 2 3 4 5
// Output → 5 1 2 3 4

#include <stdio.h>

int main()
{
    int numbers[5], temp;
    
    printf("Please Input 5 numbers:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    temp = numbers[4];

    for (int i = 4; i > 0; i--)
    {
        numbers[i] = numbers[i-1];                
    }

    numbers[0] = temp;
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d", numbers[i]);
    }
    

    return 0;
}