//Q87 Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[101];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    fgets(str, 101, stdin);

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        } else if (str[i] != '\n') {
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}

