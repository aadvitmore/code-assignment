 #include <stdio.h>

int main() {
    char line[100];
    FILE *fptr;

    fptr = fopen("info.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }
    
    fclose(fptr);

    return 0;
}
