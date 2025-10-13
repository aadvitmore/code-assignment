//Q100 Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int len, i, j, k;
    int first = 1;

    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!first) {
                printf(",");
            }
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }
    printf("\n");

    return 0;
}

