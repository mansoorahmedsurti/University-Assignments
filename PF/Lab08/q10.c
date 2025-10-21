// Replace all negative elements with their absolute values
// and all positive elements with their squares
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {-1, 2, -3},
        {4, -5, 6},
        {-7, 8, -9}
    };
    
    printf("Original matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
             if (matrix[i][j]<0)
             {
                matrix[i][j] *= -1;
             }
             else matrix[i][j]*= matrix[i][j];
                                        
        }
    }
    
    printf("\nModified matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}