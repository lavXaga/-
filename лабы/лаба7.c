#include <stdio.h>
#include "windows.h"

typedef struct {
    char name[50];
    char surname[50];
    int year;
} humen;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    humen a[4], b[4]; 
    int i, j;
    printf("4 человека:\n");
    for (i = 0; i < 4; i++)
        scanf("%s %s %d", a[i].name, a[i].surname, &a[i].year);
    for (i = 0; i < 4; i++) b[i] = a[i];
    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 4; j++)
            if (b[i].year > b[j].year) {
                humen t = b[i]; b[i] = b[j]; b[j] = t;
            }
    for (i = 0; i < 4; i++)
        printf("%s %s %d\n", b[i].name, b[i].surname, b[i].year);

    return 0; 
} 
 
