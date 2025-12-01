//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void print_point(struct Point p) {
    printf("X: %d, Y: %d\n", p.x, p.y);
}

int main() {
    struct Point p1;
    scanf("%d %d", &p1.x, &p1.y);
    print_point(p1);
    return 0;
}
