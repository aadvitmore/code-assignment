 //Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max_so_far, current_max;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max_so_far = arr[0];
    current_max = 0;

    for (i = 0; i < n; i++) {
        current_max = current_max + arr[i];
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
        if (current_max < 0) {
            current_max = 0;
        }
    }

    printf("%d\n", max_so_far);

    return 0;
}