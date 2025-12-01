//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

int main() {
    enum Role {
        ADMIN,
        USER,
        GUEST
    };
    
    char input[20];
    enum Role currentRole;

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0) {
        currentRole = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        currentRole = USER;
    } else {
        currentRole = GUEST;
    }

    if (currentRole == ADMIN) {
        printf("Welcome Admin!\n");
    } else if (currentRole == USER) {
        printf("Welcome User!\n");
    } else {
        printf("Welcome Guest!\n");
    }

    return 0;
}