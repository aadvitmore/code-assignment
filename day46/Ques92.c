//Q92 Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int i, j;

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }

    return 0;
}

