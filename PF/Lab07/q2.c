// 2)Write a program that reads the 10 numbers from user and store these numbers into an array of same size. You program should provide a searching mechanism in such a way that how many times a particular number occurred and then print it on screen. If number is not in array, then program should display a message “number not found”.

#include <stdio.h>

int main(){
    int numbers[10], num, count=0;

    printf("Please Input 10 numbers:\t");
    for(int i=0; i<10; i++){
        scanf("%d", &numbers[i]);
    }

    printf("Please Input a number you would like to search:\t");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == num)
        {
            count+=1;
        }
                
    }

    if (count>0)
    {
        printf("The number %d occurs %d times.", num, count);
    }
    else printf("Number not found.");
    

    return 0;
}