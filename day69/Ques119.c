//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i;
    int nums[100];
    int freq[100] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        
        freq[nums[i]]++;
        
        if (freq[nums[i]] > 1) {
            printf("%d\n", nums[i]);
            break;
        }
    }

    return 0;
}