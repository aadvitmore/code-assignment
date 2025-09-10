//Q41 Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, lastDigit, firstDigit, digits, swappedNum;

    scanf("%d", &n);

    lastDigit = n % 10;
    
    digits = (int)log10(n);
    
    firstDigit = (int)(n / pow(10, digits));

    swappedNum = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += n % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("%d\n", swappedNum);

    return 0;
}