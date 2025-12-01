//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fptr;

    fptr = fopen("employee.bin", "wb");
    if (fptr == NULL) {
        return 1;
    }

    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    fwrite(&e1, sizeof(struct Employee), 1, fptr);
    fclose(fptr);

    fptr = fopen("employee.bin", "rb");
    if (fptr == NULL) {
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fptr);
    printf("Name: %s\nID: %d\nSalary: %.2f\n", e2.name, e2.id, e2.salary);

    fclose(fptr);

    return 0;
}