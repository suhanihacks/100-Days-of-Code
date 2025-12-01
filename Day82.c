//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

int main() {
    enum TrafficLight {
        RED,
        YELLOW,
        GREEN
    };

    enum TrafficLight current_light;
    int input;
    scanf("%d", &input);
    current_light = input;

    switch (current_light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid light\n");
    }

    return 0;
}
