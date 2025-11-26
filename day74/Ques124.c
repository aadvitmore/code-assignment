 #include <stdio.h>

int main() {
    FILE *sourceFptr, *destFptr;
    char ch;

    sourceFptr = fopen("source.txt", "w");
    if (sourceFptr == NULL) {
        return 1;
    }
    fprintf(sourceFptr, "Learning C File Handling");
    fclose(sourceFptr);

    sourceFptr = fopen("source.txt", "r");
    if (sourceFptr == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    destFptr = fopen("destination.txt", "w");
    if (destFptr == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFptr);
        return 1;
    }

    while ((ch = fgetc(sourceFptr)) != EOF) {
        fputc(ch, destFptr);
    }

    printf("File copied successfully to destination.txt\n");

    fclose(sourceFptr);
    fclose(destFptr);

    return 0;
}
