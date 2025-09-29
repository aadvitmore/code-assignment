//Q78 Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int r, c, i;
    int sum = 0;

    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}

