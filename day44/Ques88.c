//Q88 Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[101];
    int i = 0;

    fgets(str, 101, stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("%s", str);

    return 0;
}

