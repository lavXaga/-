#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("Simple Calculator\n");
    printf("-----------------\n");

    // Ввод чисел и оператора
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    // Вычисление результата
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero!\n");
            }
            break;
            
        default:
            printf("\nError: Invalid operator!\n");
    }
    
    return 0;
}
