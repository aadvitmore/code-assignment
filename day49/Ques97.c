//Q97 Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[101];
    int i;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    
    printf("%c.", name[0]);
    
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            printf("%c.", name[i+1]);
        }
    }
    printf("\n");

    return 0;
}

