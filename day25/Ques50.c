//Q50: Write a program to print the following pattern:
//*****
//  ****
//    ***
//      **
//        *

#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (k = i; k <= rows; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}