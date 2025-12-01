//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student*) malloc(sizeof(struct Student));

    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);

    free(ptr);

    return 0;
}