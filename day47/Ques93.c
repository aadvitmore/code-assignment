//Q93 Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    int len1, len2, i, j;
    char temp;

    scanf("%s", str1);
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    for (i = 0; i < len1 - 1; i++) {
        for (j = i + 1; j < len1; j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    for (i = 0; i < len2 - 1; i++) {
        for (j = i + 1; j < len2; j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    for (i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}
