#include <stdio.h>

int main() {
    int n, k, i, j, sum, maxSum;
    int arr[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    maxSum = 0;
    // Initialize maxSum with the first subarray sum
    for (i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
