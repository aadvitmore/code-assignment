//Q73 Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int r, c, i, j;

    scanf("%d %d", &r, &c);
    int matrix[r][c];
    int row_sums[r];

    for (i = 0; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }

    for (i = 0; i < r; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    return 0;
}

