//Q77 Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int r, c, i, j;
    int isDistinct = 1;

    scanf("%d %d", &r, &c);
    int matrix[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (r != c) {
        isDistinct = 0;
    } else {
        for (i = 0; i < r; i++) {
            for (j = i + 1; j < r; j++) {
                if (matrix[i][i] == matrix[j][j]) {
                    isDistinct = 0;
                    break;
                }
            }
            if (isDistinct == 0) {
                break;
            }
        }
    }

    if (isDistinct == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

