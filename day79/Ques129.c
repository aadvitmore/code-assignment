 #include <stdio.h>

int main() {
    FILE *fptr;
    int num, sum = 0, count = 0;
    double average = 0.0;

    fptr = fopen("numbers.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    fprintf(fptr, "10 20 30 40 50");
    fclose(fptr);

    fptr = fopen("numbers.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fptr);

    if (count > 0) {
        average = (double)sum / count;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
