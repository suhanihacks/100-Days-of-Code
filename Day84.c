//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

int main() {
    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    printf("Success code: %d\n", SUCCESS);
    printf("Failure code: %d\n", FAILURE);
    printf("Timeout code: %d\n", TIMEOUT);
    return 0;
}
