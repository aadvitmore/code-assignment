//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

int main() {
    enum Color {
        RED,
        YELLOW,
        GREEN
    };

    char *names[] = {"RED", "YELLOW", "GREEN"};
    int i;

    for (i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}