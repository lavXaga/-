#include <stdio.h>
#include "windows.h"
#include "stdlib.h"
#include "string.h"

#define MAX(arr,n,max)\
    do { (max) = (arr)[0];\
    for (int i=1;i<n;i++) {\
    if ((arr)[i] > max) (max) = (arr)[i]; }\
    } while(0)

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    char str[100];
    double num[100];
    char *token;
    int count=0;
    double res_max;

    printf("числа: ");
    fgets(str,sizeof(str),stdin);
    token = strtok(str," \n");
    while (token != NULL) {
        num[count] = atof(token);
        count++;
        token = strtok(NULL," \n");
    }
    MAX(num,count,res_max);
    printf("%g\n", res_max);
    return 0;
}
