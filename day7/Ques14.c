//Q14 Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>

int main() {

    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    char lower_c = tolower(c);

    if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }


    return 0;
}

