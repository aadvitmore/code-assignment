//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positiveCount, negativeCount, zeroCount);

    return 0;
}

