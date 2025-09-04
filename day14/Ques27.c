//Q27 Write a program to print the sum of the first n odd numbers.


#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int current_odd = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        sum += current_odd;
        current_odd += 2;
    }

    printf("%d\n", sum);

    return 0;
}
