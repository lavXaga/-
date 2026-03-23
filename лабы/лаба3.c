#include <stdio.h>
#include <string.h>

int main() {
    char str[81];  // 80 символов + 1 для '\0'
    int i;

    printf("Введите строку (до 80 символов): ");
    fgets(str, sizeof(str), stdin);

    // Замена 'a' и 'b' на заглавные
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'A';
        } else if (str[i] == 'b') {
            str[i] = 'B';
        }
    }

    printf("Результат: %s", str); 

    return 0;
}
