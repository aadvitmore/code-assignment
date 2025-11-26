//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n, i;
    int nums[100];
    int actualSum = 0;
    int expectedSum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("%d\n", expectedSum - actualSum);

    return 0;
}