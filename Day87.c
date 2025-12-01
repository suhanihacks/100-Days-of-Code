//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

int main() {
    enum Role {
        ADMIN = 1,
        USER,
        GUEST
    };

    enum Role current_role;
    int input;
    scanf("%d", &input);
    current_role = input;

    switch (current_role) {
        case ADMIN:
            printf("Welcome, Administrator. Full access granted.\n");
            break;
        case USER:
            printf("Welcome, User. Standard access granted.\n");
            break;
        case GUEST:
            printf("Welcome, Guest. Read-only access granted.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}
