// Find the maximum and minimum values in a 4x4 matrix
// Also display their positions (row and column indices)
#include <stdio.h>

int main()
{
    int matrix[4][4] = {
        {12, 5, 8, 20},
        {3, 15, 9, 1},
        {7, 18, 4, 11},
        {6, 2, 19, 10}};
    int max = matrix[0][0], min = matrix[0][0], max_row = 0, max_col = 0, min_row = 0, min_col = 0, i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                max_row = i;
                max_col = j;
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                min_row = i;
                min_col = j;
            }
        }
    }


printf("Max: %d at [%d][%d]\n", max, max_row, max_col);
printf("Min: %d at [%d][%d]\n", min, min_row, min_col);
return 0;
}
