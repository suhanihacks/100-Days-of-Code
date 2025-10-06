//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    long totalSeconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%ld", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time in H:M:S format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
