 #include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int roll, marks;

    fptr = fopen("records.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    fprintf(fptr, "Asha 101 85\n");
    fprintf(fptr, "Ravi 102 92\n");
    fclose(fptr);

    fptr = fopen("records.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fptr, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fptr);

    return 0;
}
