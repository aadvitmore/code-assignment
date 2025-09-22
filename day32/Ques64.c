//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int n, digit, i;
    int freq[10] = {0};
    int maxFreq = 0, resultDigit = 0;

    scanf("%d", &n);
    
    if (n < 0) n = -n;

    do {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    } while (n > 0);

    maxFreq = freq[0];
    resultDigit = 0;

    for (i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            resultDigit = i;
        }
    }

    printf("%d\n", resultDigit);

    return 0;
}

