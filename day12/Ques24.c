//Q24 Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    scanf("%d", &units);

    if (units > 300) {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    } else if (units > 200) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else if (units > 100) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units > 0) {
        bill = units * 5;
    }

    printf("Bill: ₹%.0f\n", bill);

    return 0;
}
