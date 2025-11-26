#include <stdio.h>

int main() {
    int n, i;
    int totalSum = 0;
    int currentSum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        totalSum += i;
    }

    for (i = 1; i <= n; i++) {
        currentSum += i;
        if (currentSum == (totalSum - currentSum + i)) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}


