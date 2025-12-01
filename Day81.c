//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

int main() {
    enum Day {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    printf("%d\n", SUNDAY);
    printf("%d\n", MONDAY);
    printf("%d\n", SATURDAY);
    return 0;
}
