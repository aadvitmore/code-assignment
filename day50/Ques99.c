//Q99 Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[11];

    scanf("%s", date);

    printf("%c%c-Apr-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8], date[9]);

    return 0;
}

