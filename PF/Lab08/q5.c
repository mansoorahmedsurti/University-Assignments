// Count how many positive, negative, and zero elements are in a 3x3 matrix
#include <stdio.h>

int main() {
    int matrix[3][3] = {{-1, 0, 3}, {4, -5, 0}, {7, -8, 9}};
    int positive = 0, negative = 0, zero = 0, i, j;
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (matrix[i][j]>0)
            {
                positive += 1;
            } 
            else if(matrix[i][j]<0){
                negative +=1;
            } else zero +=1;
               
        }
    }
    
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);
    return 0;
}