//Q67 Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, key;

    scanf("%d", &n);
    int arr[n + 1];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &key);

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

