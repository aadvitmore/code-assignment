//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int len, i, j;
    int maxLen = 0;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        int seen[256] = {0};
        int currentLen = 0;
        
        for (j = i; j < len; j++) {
            if (seen[s[j]] == 1) {
                break;
            } else {
                seen[s[j]] = 1;
                currentLen++;
            }
        }
        
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}