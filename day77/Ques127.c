 #include <stdio.h>

int main() {
    FILE *readFptr, *writeFptr;
    char ch;

    readFptr = fopen("input.txt", "w");
    if (readFptr == NULL) {
        return 1;
    }
    fprintf(readFptr, "Hello World\nC programming");
    fclose(readFptr);

    readFptr = fopen("input.txt", "r");
    if (readFptr == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    writeFptr = fopen("output.txt", "w");
    if (writeFptr == NULL) {
        printf("Error opening output file!\n");
        fclose(readFptr);
        return 1;
    }

    while ((ch = fgetc(readFptr)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, writeFptr);
    }

    fclose(readFptr);
    fclose(writeFptr);

    return 0;
}
