//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
#include <string.h>

int main() {
    enum Months {
        JAN, FEB, MAR, APR, MAY, JUN,
        JUL, AUG, SEP, OCT, NOV, DEC
    };

    char str[10];
    int month;

    scanf("%s", str);

    if (strcmp(str, "JAN") == 0) month = JAN;
    else if (strcmp(str, "FEB") == 0) month = FEB;
    else if (strcmp(str, "MAR") == 0) month = MAR;
    else if (strcmp(str, "APR") == 0) month = APR;
    else if (strcmp(str, "MAY") == 0) month = MAY;
    else if (strcmp(str, "JUN") == 0) month = JUN;
    else if (strcmp(str, "JUL") == 0) month = JUL;
    else if (strcmp(str, "AUG") == 0) month = AUG;
    else if (strcmp(str, "SEP") == 0) month = SEP;
    else if (strcmp(str, "OCT") == 0) month = OCT;
    else if (strcmp(str, "NOV") == 0) month = NOV;
    else month = DEC;

    if (month == FEB) {
        printf("28 or 29 days\n");
    } else if (month == APR || month == JUN || month == SEP || month == NOV) {
        printf("30 days\n");
    } else {
        printf("31 days\n");
    }

    return 0;
}