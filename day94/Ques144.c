//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void printstudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    printstudent(s);

    return 0;
}