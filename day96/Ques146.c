//Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningdate;
};

int main() {
    struct Employee e;

    scanf("%s %d %d %d %d", e.name, &e.id, &e.joiningdate.day, &e.joiningdate.month, &e.joiningdate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", e.name, e.id, e.joiningdate.day, e.joiningdate.month, e.joiningdate.year);

    return 0;
}