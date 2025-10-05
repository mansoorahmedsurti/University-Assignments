// Student Grade Evaluation
// Take marks for 5 students using a loop and variables.
// - Calculate total, percentage, and grade for each.
// - Display results in tabular format.

#include <stdio.h>

int main()
{
    int student = 1, marks1, marks2, marks3, marks4, marks5, total_marks;
    float percentage;
    char grade;

    while (student <= 5)
    {
        printf("Student %d\n", student);
        printf("Please Input marks for Maths:\t");
        scanf("%d", &marks1);
        printf("Please Input marks for English:\t");
        scanf("%d", &marks2);
        printf("Please Input marks for Chemistry:\t");
        scanf("%d", &marks3);
        printf("Please Input marks for Physics:\t");
        scanf("%d", &marks4);
        printf("Please Input marks for Islamiyat:\t");
        scanf("%d", &marks5);

        total_marks = marks1 + marks2 + marks3 + marks4 + marks5;

        percentage = ((float)total_marks / 500) * 100;

        if (percentage >= 80)
            grade = 'A';
        else if (percentage >= 70)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 50)
            grade = 'D';
        else
            grade = 'F';

        printf("\nTotal Marks\tPercentage\tGrade\n");
        printf("%d \t %.2f \t %c \n\n", total_marks, percentage, grade);

        student++;
    }

    return 0;
}