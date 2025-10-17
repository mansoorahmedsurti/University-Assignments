// 3)Sir. Talha Shahid ask you to write you a program which can help him in storing your quiz marks for pass students within range [5-10] will be stored, consider there are 10 students registered in Section BDS-1A. He wants an another array of same size where marks for failed students within range [0-5] are stored. Write a program for the given scenario. You program should exit if user enters -1 and will display the marks entered along with average of each array.

#include <stdio.h>

int main(){
    int marks[10], failed[10], passed[10], students;
    int f=0, p=0, failed_marks=0, passed_marks=0;
    float passed_average, failed_average;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
        if(marks[i]<0)
        {
            students = i;
            break;
        }
        
    }    

    for (int i = 0; i < students; i++)
    {
        if(marks[i] <= 5 && marks[i]>=0){
            failed[f] = marks[i];   
            failed_marks+=failed[f];
            f+=1;         
        }
        else if(marks[i]>5 && marks[i]<=10){
            passed[p] = marks[i];   
            passed_marks+=passed[p];
            p+=1;         
        } else printf("Please input between 1 and 10.");
    }
    printf("Failed Students Marks:");
    for (int i = 0; i < f; i++)
    {
        printf("%d\n",failed[i]);
    }
    printf("Passed Students Marks:");
    for (int i = 0; i < p; i++)
    {
        printf("%d\n",passed[i]);
    }


    failed_average = (float)failed_marks/f;
    passed_average = (float)passed_marks/p;

    printf("\nThe failed students average is %.2f.", failed_average);
    printf("\nThe passed students average is %.2f.", passed_average);

    return 0;
}