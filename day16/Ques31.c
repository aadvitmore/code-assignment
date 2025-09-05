//Q31 Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

int main() {
    int n, remainder;
    long long binaryNumber = 0;
    int i = 1;

    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }

    printf("%lld\n", binaryNumber);

    return 0;
}
