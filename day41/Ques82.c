//Q82: Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[101];
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

