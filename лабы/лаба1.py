#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, x1, x2;


    a = 2.0;
    b = -7.0;
    c = 3.0;

    printf("Коэффициенты квадратного уравнения:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);

    
    discriminant = pow(b, 2) - 4 * a * c;
    printf("Дискриминант = %.2f\n", discriminant);

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корни уравнения:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        printf("Уравнение имеет один корень:\n");
        printf("x = %.2f\n", x1);
    } else {
        printf("Уравнение не имеет действительных корней.\n");
    }

    return 0;
}
