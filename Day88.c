//Print all enum names and integer values using a loop.
#include <stdio.h>

int main() {
    enum Color {
        RED,
        GREEN,
        BLUE,
        TOTAL_COLORS
    };

    char *color_names[] = {"RED", "GREEN", "BLUE"};

    for (int i = 0; i < TOTAL_COLORS; i++) {
        printf("%s: %d\n", color_names[i], i);
    }

    return 0;
}
