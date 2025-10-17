// 6)You are assisting your English language teacher who wants to analyze how many vowels and consonants appear in students’ submitted words. Write a program that reads a single word using scanf("%s", str); and counts the number of vowels and consonants in it without using any string library functions like strlen(). The program should then display both counts on the screen.

#include <stdio.h>

int main(){
    char str[100];
    int vowel_count=0, consonant_count=0;
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel_count += 1;
        } 
        else consonant_count += 1;
    }
    printf("Vowel Count:%d\nConsonent Count:%d", vowel_count, consonant_count);


    return 0;
}