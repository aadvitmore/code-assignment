//Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101];
    int i = 0;
    int vowels = 0, consonants = 0;

    scanf("%s", str);

    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}

