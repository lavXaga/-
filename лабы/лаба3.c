#include <stdio.h>
#include <string.h>

int main() {
    char str[81];
    char choice;
    int i;
    
    do {
        printf("\nВведите строку (до 80 символов): ");
        fgets(str, sizeof(str), stdin);
        size_t len = strlen(str);
        if (len > 0 && str[len-1] == '\n') {
            str[len-1] = '\0';
        }
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'а') {
                str[i] = 'А';
            } else if (str[i] == 'ь') {
                str[i] = 'Ь';
            }
        }
        
        printf("Результат: %s\n", str);
        
        printf("\nХотите продолжить? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("Программа завершена.\n");
    return 0;
}
