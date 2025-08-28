// Q16 Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>
int main(){
    int Num1,Num2,Num3;
    printf("Enter Num1: ");
    scanf("%d" ,&Num1);
    printf("Enter Num2: ");
    scanf("%d", &Num2);
    printf("Enter Num3: ");
    scanf("%d" , &Num3);
    if(Num1>Num2 && Num1>Num3){
        printf("Largest is %d \n" ,Num1);
    }
        else if (Num2>Num1 && Num2>Num3 ){
            printf("Largest is %d \n" ,Num2);
    }
    else{
        printf("Largest is %d \n" ,Num3);
    }
    return 0;
    
    
}