//Q52 Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*


#include <stdio.h>

int main() {
    int group, i, numStars;

    for (group = 1; group <= 5; group++) {
        if (group == 1 || group == 5) {
            numStars = 1;
        } else if (group == 2 || group == 4) {
            numStars = 3;
        } else {
            numStars = 5;
        }

        for (i = 0; i < numStars; i++) {
            printf("*\n");
        }

        if (group < 5) {
            printf("\n");
        }
    }

    return 0;
}

