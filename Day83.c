//Create an enum for months and print how many days each month has.
#include <stdio.h>

int main() {
    enum Month {
        JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
    };

    enum Month current_month;
    int input;
    scanf("%d", &input);
    current_month = input;

    switch (current_month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30\n");
            break;
        case FEB:
            printf("28/29\n");
            break;
        default:
            printf("Invalid month\n");
    }

    return 0;
}
