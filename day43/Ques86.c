//Q86 Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int i, len;
    int isPalindrome = 1;

    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}

