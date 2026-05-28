#include <stdio.h>
#include "windows.h"
#include "stdlib.h"
#include "string.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str[100];
    char copy[100]; 
    char op[50];
    char *token; 
    double result;
    double num1; 
    int op_count = 0; 
    int i; 

    printf("пример:");
    fgets(str, 100, stdin);
    op_count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if  (i > 0 && (str[i] == '+' || str[i] == '-')) { 
            op[op_count] = str[i];
            op_count++;
        }
    } 
    strcpy(copy, str); 
    token = strtok(copy, "+- \n");
    num1 = atof(token);
    result = num1;
    int op_index = 0;
    while ((token = strtok(NULL, "+- \n")) != NULL) {
        num1 = atof(token);
        if (op[op_index] == '+') { 
            result = result + num1;
        }else if (op[op_index] == '-') {
            result = result - num1;
        }
        op_index++;
    }
    printf("%g\b",result);
    return 0;
}
