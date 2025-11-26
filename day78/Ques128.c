 #include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    int vowels = 0, consonants = 0;

    fptr = fopen("text.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    fprintf(fptr, "Welcome to C language");
    fclose(fptr);

    fptr = fopen("text.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fptr);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
