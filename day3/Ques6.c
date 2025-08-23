/*Q6 Write a program to swap two numbers using a third variable.*/

#include <stdio.h>

int main() {

    int num1, num2, temp;

    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap: %d %d\n", num1, num2);


    return 0;
}

