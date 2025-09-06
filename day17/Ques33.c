//Q33 Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, number, remainder, ndigits = 0;
    int result = 0;

    scanf("%d", &n);

    number = n;

    int temp = n;
    if (temp == 0) {
        ndigits = 1;
    } else {
        while (temp != 0) {
            temp /= 10;
            ++ndigits;
        }
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, ndigits);
        temp /= 10;
    }

    if (result == number) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
