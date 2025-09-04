//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}
