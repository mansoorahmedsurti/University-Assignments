// Check if a 3x3 matrix is symmetric (matrix[i][j] == matrix[j][i] for all i,j)
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    int symmetric = 1; // Assume symmetric initially
    int i, j;
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (matrix[i][j]!=matrix[j][i])
            {
                symmetric =0;
            }
            
        }
    }
    
    
    if(symmetric)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");
    return 0;
}