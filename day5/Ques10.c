/*Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>

int main() {

    int total_seconds;
    int hours;
    int minutes;
    int seconds;
    int remaining_seconds;

    printf("Enter seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);


    return 0;
}

