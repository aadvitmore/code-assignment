//Q39 Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, product = 1, remainder;

    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product = product * remainder;
        }
        n = n / 10;
    }

    printf("%d\n", product);

    return 0;
}
