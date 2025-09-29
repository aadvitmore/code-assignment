//Q79 Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int r, c, i, j;

    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int s = 0; s < r + c - 1; s++) {
        if (s % 2 == 0) {
            for (i = s; i >= 0; i--) {
                j = s - i;
                if (i < r && j < c) {
                    printf("%d ", matrix[i][j]);
                }
            }
        } else {
            for (j = s; j >= 0; j--) {
                i = s - j;
                if (i < r && j < c) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    printf("\n");

    return 0;
}

