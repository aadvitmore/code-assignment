//Q22 Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercentage = (profit / costPrice) * 100;
        printf("Profit %.0f%%\n", profitPercentage);
    } else if (costPrice > sellingPrice) {
        float loss = costPrice - sellingPrice;
        float lossPercentage = (loss / costPrice) * 100;
        printf("Loss %.0f%%\n", lossPercentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
