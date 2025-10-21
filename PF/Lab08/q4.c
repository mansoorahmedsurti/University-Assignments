// Calculate the sum of all boundary elements (first row, last row, first column, last column)
// For a 4x4 matrix, don't count corners twice
#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int boundary_sum = 0, i, j;
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (i == 0 || i==3 || j ==0 ||j==3)
            {
                boundary_sum += matrix[i][j];
            }
               
        }
    }
    
    
    printf("Boundary sum: %d\n", boundary_sum);
    return 0;
}