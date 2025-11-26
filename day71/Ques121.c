 #include <stdio.h>

int main() {
    char name[50];
    int age;
    FILE *fptr;

    scanf("%s", name);
    scanf("%d", &age);

    fptr = fopen("info.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Name: %s, Age: %d\n", name, age);
    
    fclose(fptr);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
