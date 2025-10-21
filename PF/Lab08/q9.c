// Calculate the sum of elements in the upper triangular part of a 3x3 matrix
// (including main diagonal)
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int upper_sum = 0;
    
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i<=j)
            {
                upper_sum+=matrix[i][j];
            }
                            
        }
    }
    
    printf("Upper triangular sum: %d\n", upper_sum);
    return 0;
}