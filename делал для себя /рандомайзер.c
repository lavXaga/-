#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Инициализируем генератор случайных чисел текущим временем
    srand(time(NULL));
    
    // Генерируем случайное число от 0 до 32767
    int random_number = rand();
    
    // Выводим результат
    printf("Случайное число: %d\n", random_number);
    
    return 0;
}
