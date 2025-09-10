//Q37 Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int n1, n2, max;

    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("%d\n", max);
            break;
        }
        ++max;
    }

    return 0;
}
