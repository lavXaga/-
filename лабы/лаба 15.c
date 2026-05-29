#include <stdio.h>
#include "windows.h"
#include "stdlib.h"
#include "string.h"

void p(int n, int m) {
    if (n<10)
        printf("%d ",n);
    else if (m==0) {
        p(n/10, 0);
        printf("%d ",n%10);
    }
    else {
        printf("%d ",n%10);
        p(n/10, 1);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    printf("число: ");
    scanf("%d",&n);
    p(n,0); 
    printf("\n");
    p(n,1);
    printf("\n");

    return 0;
}

