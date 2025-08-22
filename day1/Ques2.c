#include <stdio.h>

int main() {
    
    int num1, num2, sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
   printf("The difference of %d and %d is %d.\n", num1, num2, difference);
   printf("The product of %d and %d is %d.\n", num1, num2, product);
   printf("The quotient of %d and %d is %d.\n", num1, num2, quotient);
    


    return 0;
}

