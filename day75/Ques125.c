 #include <stdio.h>

int main() {
    FILE *fptr;
    char line[100];

    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    fprintf(fptr, "Hello world\n");
    fclose(fptr);

    fgets(line, sizeof(line), stdin);

    fptr = fopen("data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "%s", line);
    
    fclose(fptr);

    printf("File updated successfully with appended text.\n");

    return 0;
}
