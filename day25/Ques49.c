//Q49: Write a program to print the following pattern:
//5
//45
//345
//2345
//12345


#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = (rows + 1 - i); j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
