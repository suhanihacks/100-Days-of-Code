//Assign explicit values starting from 10 and print them.
#include <stdio.h>

int main() {
    enum CustomStart {
        START = 10,
        NEXT,
        THIRD
    };

    printf("START: %d\n", START);
    printf("NEXT: %d\n", NEXT);
    printf("THIRD: %d\n", THIRD);
    return 0;
}
