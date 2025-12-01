//Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
    char label[10];
};

int are_identical(struct Point p1, struct Point p2) {
    if (p1.x != p2.x || p1.y != p2.y) {
        return 0;
    }
    if (strcmp(p1.label, p2.label) != 0) {
        return 0;
    }
    return 1;
}

int main() {
    struct Point p1, p2;

    scanf("%d %d %s", &p1.x, &p1.y, p1.label);
    scanf("%d %d %s", &p2.x, &p2.y, p2.label);

    if (are_identical(p1, p2)) {
        printf("Identical\n");
    } else {
        printf("Not identical\n");
    }

    return 0;
}
