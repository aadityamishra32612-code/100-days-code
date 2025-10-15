#include <stdio.h>

int main(void) {
    double length, breadth;

    printf("Enter length and breadth of the rectangle (separated by space): ");
    if (scanf("%lf %lf", &length, &breadth) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (length < 0 || breadth < 0) {
        fprintf(stderr, "Length and breadth must be non-negative.\n");
        return 1;
    }

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    printf("Area: %.2f\nPerimeter: %.2f\n", area, perimeter);
    return 0;
}
