// Calculate the sum of both main diagonal and anti-diagonal elements
// For a 3x3 matrix, main diagonal: [0][0], [1][1], [2][2]
// anti-diagonal: [0][2], [1][1], [2][0]
#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int main_diag_sum = 0, anti_diag_sum = 0, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                main_diag_sum += matrix[i][j];
            }
            else if (i + j == 2)
            {
                anti_diag_sum += matrix[i][j];
            }
        }
    }

    printf("Main diagonal sum: %d\n", main_diag_sum);
    printf("Anti-diagonal sum: %d\n", anti_diag_sum);
    return 0;
}