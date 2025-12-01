//Show that enums store integers by printing assigned values.
#include <stdio.h>

int main() {
    enum Code {
        ERROR = -1,
        WARNING = 0,
        SUCCESS = 1
    };

    printf("ERROR: %d\n", ERROR);
    printf("WARNING: %d\n", WARNING);
    printf("SUCCESS: %d\n", SUCCESS);
    return 0;
}
