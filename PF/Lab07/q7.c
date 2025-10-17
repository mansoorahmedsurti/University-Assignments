// 7)You are working in a data management department where you are asked to remove duplicate entries from a list of recorded IDs. Write a program that takes 10 integers from the user and stores them in an array. The program should replace every duplicate element (after its first occurrence) with -1 to mark it as a duplicate and then display the final updated array on the screen.
// Example: Input → 2 3 5 3 5 9 1 2 8 1 → Output → 2 3 5 -1 -1 9 1 -1 8 -1

#include <stdio.h>

int main(){
    int numbers[10], occurrence=0, element;
    int duplicate[10] = {-1};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(numbers[i] == numbers[j]){
                numbers[i] = -1;
                break;
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",numbers[i]);
    }
    
    
    return 0;
}