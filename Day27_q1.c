//Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*
#include <stdio.h>

int main() {
    int i, j, k;
    int max_stars = 9; 

    for (i = 1; i <= max_stars; i += 2) {
        for (j = 0; j < (max_stars - i) / 2; j++) {
            printf(" ");
        }
        for (k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = max_stars - 2; i >= 1; i -= 2) {
        for (j = 0; j < (max_stars - i) / 2; j++) {
            printf(" ");
        }
        for (k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
