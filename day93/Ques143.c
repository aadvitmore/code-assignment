//Q143: Find and print the student with the highest marks.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i;
    struct Student current;
    struct Student topper;
    
    topper.marks = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", current.name, &current.roll, &current.marks);
        
        if (current.marks > topper.marks) {
            topper = current;
        }
    }

    printf("Topper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
}