//Q35 Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
