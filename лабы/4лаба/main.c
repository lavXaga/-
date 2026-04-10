#include <stdio.h>
#include "заголовочный.h"

int main() {
    double a, b, c;

    printf("Enter sides of triangle:\n");
    printf("Side a: ");
    scanf("%lf", &a);
    printf("Side b: ");
    scanf("%lf", &b);
    printf("Side c: ");
    scanf("%lf", &c);

    if (is_valid_triangle(a, b, c)) {
        printf("\nPerimeter: %.2f\n", calculate_perimeter(a, b, c));
        printf("Area: %.2f\n", calculate_area(a, b, c));
    } else {
        printf("\nError: Invalid triangle!\n");
    }

    return 0;
}
