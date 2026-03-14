#include <stdio.h>
#include <math.h>

int main() {
    double discriminant, x1, x2;
    double a, b, c;
    char choice = 'y';
    
    while (choice == 'y' || choice == 'Y') {
        printf("\n=== Solving Quadratic Equation ===\n");
        
        // Entering coefficients from keyboard
        printf("Enter coefficient a: ");
        scanf("%lf", &a);
        printf("Enter coefficient b: ");
        scanf("%lf", &b);
        printf("Enter coefficient c: ");
        scanf("%lf", &c);
        
        printf("\nQuadratic equation coefficients:\n");
        printf("a = %.2f\n", a);
        printf("b = %.2f\n", b);
        printf("c = %.2f\n", c);
        
        // Checking if it's a quadratic equation
        if (a == 0) {
            printf("This is not a quadratic equation (a cannot be 0)!\n");
        } else {
            discriminant = pow(b, 2) - 4 * a * c;
            printf("Discriminant = %.2f\n", discriminant);
            
            if (discriminant > 0) {
                x1 = (-b + sqrt(discriminant)) / (2 * a);
                x2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("Roots of the equation:\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
            } else if (discriminant == 0) {
                x1 = -b / (2 * a);
                printf("Equation has one root:\n");
                printf("x = %.2f\n", x1);
            } else {
                printf("Equation has no real roots.\n");
            }
        }
        
        // Asking user to continue
        printf("\nDo you want to solve another equation? (y/n): ");
        scanf(" %c", &choice);  // Space before %c is needed to ignore the previous newline character
    }
    
    printf("\nProgram finished. Thank you for using!\n");
    return 0;
}
