#include <stdio.h>
#include <string.h>

int main() {
    char str[81];
    char choice;
    int i;
    
    do {
        printf("\nEnter a string (up to 80 characters): ");
        fgets(str, sizeof(str), stdin);
        size_t len = strlen(str);
        if (len > 0 && str[len-1] == '\n') {
            str[len-1] = '\0';
        } else {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        } 
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'a') {
                str[i] = 'A';
            } else if (str[i] == 'b') {
                str[i] = 'B';
            }
        }
        printf("Result: %s\n", str);
        printf("\nContinue? (y/n): ");
        scanf(" %c", &choice);
        while (getchar() != '\n');
    
    } while (choice == 'y' || choice == 'Y');
    printf("Program terminated.\n");
    return 0;
}
