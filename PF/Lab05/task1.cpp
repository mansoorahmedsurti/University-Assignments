#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Please enter three numbers to check the greatest: \t");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2) {
        if (n1 > n3) {
            printf("%d is the greatest\n", n1);
        } else {
            printf("%d is the greatest\n", n3);
        }
    } else {  
        if (n2 > n3) {
            printf("%d is the greatest\n", n2);
        } else {
            printf("%d is the greatest\n", n3);
        }
    }

    return 0;
}

