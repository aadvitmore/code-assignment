//Q32 Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, reversedNumber = 0, remainder, originalNumber;

    scanf("%d", &n);

    originalNumber = n;

    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    if (originalNumber == reversedNumber) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
