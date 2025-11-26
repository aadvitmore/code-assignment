 #include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char line[101];
    int charCount = 0, wordCount = 0, lineCount = 0;
    int i, inWord = 0;

    // First, create the sample.txt file to read from
    fptr = fopen("sample.txt", "w");
    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(fptr, "Hello world\nThis is C programming");
    fclose(fptr);

    // Now, open the file to read and count
    fptr = fopen("sample.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fptr) != NULL) {
        lineCount++;
        charCount += strlen(line);
        inWord = 0;

        for (i = 0; line[i] != '\0'; i++) {
            if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
                inWord = 0;
            } else if (inWord == 0) {
                inWord = 1;
                wordCount++;
            }
        }
    }

    fclose(fptr);

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
