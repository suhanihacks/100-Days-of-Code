//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

int main() {
    enum Gender {
        MALE,
        FEMALE
    };

    struct Person {
        enum Gender gender;
    };

    struct Person p1;
    int input;
    scanf("%d", &input);
    p1.gender = input;

    if (p1.gender == MALE) {
        printf("Person's gender: MALE\n");
    } else if (p1.gender == FEMALE) {
        printf("Person's gender: FEMALE\n");
    } else {
        printf("Person's gender: UNKNOWN\n");
    }
    
    return 0;
}
