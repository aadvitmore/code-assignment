//Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    int found = 0;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}

