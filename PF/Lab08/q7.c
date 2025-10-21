// Calculate sum and average for each row separately
#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    int sum, i, j;
    float average;

    for ( i = 0; i < 3; i++)
    {
        sum=0;
        for ( j = 0; j < 4; j++)
        {
            sum += matrix[i][j];
        }
        average = sum/4.0;
        printf("Row %d: Sum = %d Average = %.2f\n", i, sum, average);

    }
    // Expected output:
    // Row 0: Sum = 10, Average = 2.50
    // Row 1: Sum = 26, Average = 6.50
    // Row 2: Sum = 42, Average = 10.50
    
    return 0;
}