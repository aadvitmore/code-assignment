//Q89 Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[101];
    char ch;
    int i = 0, count = 0;
    
    printf("Enter string: ");
    scanf("%s", str);
    printf("\nEnter character: ");
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("\n%d\n", count);

    return 0;
}

