#include <stdio.h>
#include <math.h>

struct Circle {
    float radius;
    float x;
    float y;
};

float computeArea(struct Circle c) {
    return 3.14159 * c.radius * c.radius;
}

int isInside(struct Circle c, float x1, float y1) {
    float distance = sqrt((x1 - c.x)*(x1 - c.x) + (y1 - c.y)*(y1 - c.y));
    if (distance <= c.radius) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Circle c;

    c.radius = 5;
    c.x = 0;
    c.y = 0;

    printf("Area of the circle: %.2f\n", computeArea(c));

    float x1 = 3, y1 = 4;

    if (isInside(c, x1, y1)) {
        printf("Point (%.1f, %.1f) is inside the circle.\n", x1, y1);
    } else {
        printf("Point (%.1f, %.1f) is outside the circle.\n", x1, y1);
    }

    return 0;
}


