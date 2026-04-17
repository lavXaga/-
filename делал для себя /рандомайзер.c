#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    // Генерируем случайное число от 0 до 32767
    int random_number = rand();
    
    printf("Случайное число: %d\n", random_number);

    return 0; 
}
