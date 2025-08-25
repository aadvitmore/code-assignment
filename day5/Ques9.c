/*Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
#include <math.h>

int main() {

    double principal, rate, time;
    double simple_interest, compound_interest;
    double amount;

    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simple_interest, compound_interest);


    return 0;
}

