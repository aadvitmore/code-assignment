//Q43 Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int n, num, lastdigit, sum = 0;
    int fact;

    printf("Enter a number: ");
    scanf("%d", &n);
 num = n;

    while (n > 0) {
        lastdigit = n % 10;
        fact = 1;
        for (int i = 1; i <= lastdigit; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if (sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
