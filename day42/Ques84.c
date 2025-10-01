//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101];
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("%s\n", str);

    return 0;
}


