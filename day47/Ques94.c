//Q94 Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char longest[101];
    char *word;
    int max = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    word = strtok(str, " ");
    while (word != NULL) {
        if (strlen(word) > max) {
            max = strlen(word);
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("%s\n", longest);

    return 0;
}


