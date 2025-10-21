// Search for a specific element in a 4x4 matrix
// If found, display all positions where it occurs
#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 2, 7, 8},
        {9, 10, 2, 12},
        {13, 14, 15, 2}
    };
    int search_element = 2;
    int found = 0;
    
    int i, j;

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (search_element == matrix[i][j])
            {
                found=1;
                printf("Found at Row:%d Column:%d.", i, j);
            }
                        
        }
    }
    
    if(!found)
        printf("Element %d not found in matrix\n", search_element);
    return 0;
}