//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freq[26] = {0};
    int i, len_s, len_t;

    scanf("%s", s);
    scanf("%s", t);

    len_s = strlen(s);
    len_t = strlen(t);

    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; i < len_s; i++) {
        freq[s[i] - 'a']++;
    }

    for (i = 0; i < len_t; i++) {
        freq[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}