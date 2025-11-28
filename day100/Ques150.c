//Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

int main() {
    enum traffic_light {
        RED,
        YELLOW,
        GREEN
    };

    int light_value;

    scanf("%d", &light_value);

    if (light_value == RED) {
        printf("Stop\n");
    } else if (light_value == YELLOW) {
        printf("Wait\n");
    } else if (light_value == GREEN) {
        printf("Go\n");
    }

    return 0;
}