//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int i = 0;

    fgets(str, 101, stdin);

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z') {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }

    printf("%s", str);

    return 0;
}