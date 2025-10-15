#include <stdio.h>

int main(void) {
    double x, y;
    printf("Enter two numbers separated by space: ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Sum = %.2f\n", x + y);
    printf("Difference = %.2f\n", x - y);
    printf("Product = %.2f\n", x * y);
    if (y == 0.0) {
        printf("Quotient = undefined (division by zero)\n");
    } else {
        printf("Quotient = %.2f\n", x / y);
    }
    return 0;
}
