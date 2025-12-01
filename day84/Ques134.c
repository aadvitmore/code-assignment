//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 
#include <stdio.h>
#include <string.h>

int main() {
    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    char str[20];
    int status;

    scanf("%s", str);

    if (strcmp(str, "SUCCESS") == 0) {
        status = SUCCESS;
    } else if (strcmp(str, "FAILURE") == 0) {
        status = FAILURE;
    } else {
        status = TIMEOUT;
    }

    if (status == SUCCESS) {
        printf("Operation successful\n");
    } else if (status == FAILURE) {
        printf("Operation failed\n");
    } else {
        printf("Operation timed out\n");
    }

    return 0;
}