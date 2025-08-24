/*Write a program to find and display the sum of the first n natural numbers.*/


#include <stdio.h>

int main() {

    int n, i, sum = 0;
    
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum=%d\n", sum);

    return 0;
}

