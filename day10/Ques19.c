//Q19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

       if 
       ((a + b > c) && (a + c > b) && (b + c > a) && (a > 0 && b > 0 && c > 0)) {
        
        printf("\nThe triangle is VALID.\n");

        if 
        (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        else if 
        (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        else 
        {
            printf("It is a Scalene triangle.\n");
        }

        float a_sq = a * a;
        float b_sq = b * b;
        float c_sq = c * c;

        if 
        ((a_sq + b_sq == c_sq) || (a_sq + c_sq == b_sq) || (b_sq + c_sq == a_sq)) {
            printf("It is also a Right-Angled triangle.\n");
        }

    } else {
        printf("\nThe triangle is NOT VALID.\n");
    }


    return 0;
}

 
