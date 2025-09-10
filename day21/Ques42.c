//Q42 Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}

