// Write a program that counts and displays how many even and odd numbers are in a 3x3 matrix
#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int even = 0, odd = 0, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j]%2==0)
            {
                even+=1;
            }
            else odd+=1;
            
            
        }
        
    }
    
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    return 0;
}