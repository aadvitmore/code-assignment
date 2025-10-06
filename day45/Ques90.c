//Q90 Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[101];
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}

