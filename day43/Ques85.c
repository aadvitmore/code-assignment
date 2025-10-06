//Q85 Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int i, len;
    char temp;

    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s\n", str);

    return 0;
}

