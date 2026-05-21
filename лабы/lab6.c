#include <stdio.h>
#include "windows.h"
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
    char name[100];
    char surname[100];
    char patr[100];
    int year;
    while (fscanf(in,"%s %s %s %d ", surname, name , patr, &year)==4) {
        if (year >1980){
            fprintf(out,"%s %s %s %d\n", surname,name, patr, year);
        }
    }
    while (fscanf(in,"%s %s %s %d ", surname, name , patr, &year)==4) {
        if (name[0] == 'Б') {
            fprintf(out,"%s %s %s %d\n", surname,name, patr, year);
        }
    }
    fclose(in);
    fclose(out);
    return 0;
}
 
