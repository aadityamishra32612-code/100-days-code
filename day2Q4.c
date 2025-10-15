#include <stdio.h>

int main(void) {
    double radius;
    const double PI = 3.14159265358979323846;

    printf("Enter radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (radius < 0) {
        fprintf(stderr, "Radius must be non-negative.\n");
        return 1;
    }

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("Area: %.2f\nCircumference: %.2f\n", area, circumference);
    return 0;
}