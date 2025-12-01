//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

int main() {
    enum Operation {
        ADD,
        SUBTRACT,
        MULTIPLY
    };

    char input[20];
    int n1, n2;
    enum Operation op;

    scanf("%s %d %d", input, &n1, &n2);

    if (strcmp(input, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else {
        op = MULTIPLY;
    }

    switch (op) {
        case ADD:
            printf("%d\n", n1 + n2);
            break;
        case SUBTRACT:
            printf("%d\n", n1 - n2);
            break;
        case MULTIPLY:
            printf("%d\n", n1 * n2);
            break;
    }

    return 0;
}