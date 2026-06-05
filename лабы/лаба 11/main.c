#include <stdio.h>
#include <stdarg.h>
#include "stats.h"

void calculate(int count, ...) {
    va_list args;
    double sum, min, max, current;
    
    va_start(args, count);
    
    current = va_arg(args, double);
    sum = min = max = current;
    
    for (int i = 1; i < count; i++) {
        current = va_arg(args, double);
        sum += current;
        if (current < min) min = current;
        if (current > max) max = current;
    }
    
    va_end(args);
    
    printf("Сумма: %g\n", sum);
    printf("Максимум: %g\n", max);
    printf("Минимум: %g\n", min);
    printf("Среднее: %g\n", sum / count);
}
