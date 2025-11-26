 #include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char line[100];

    fptr = fopen("sample.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    fprintf(fptr, "This is the content of sample.txt.");
    fclose(fptr);

    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");
        while (fgets(line, sizeof(line), fptr) != NULL) {
            printf("%s", line);
        }
        printf("\n");
        fclose(fptr);
    }

    return 0;
}
