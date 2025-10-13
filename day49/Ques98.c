//Q98 Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[101];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf("%c.", name[i + 1]);
        }
    }
    
    printf(" ");
    
    for (i = lastSpace + 1; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}

