/*Q7 Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>

int main() {

    int num1, num2;
    printf("Enter numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swap: %d %d\n", num1, num2);

    return 0;
}

