#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


typedef struct {
    char name[200];
    int year;
    char gender;
    float height;
} Person;

int sort_field;

int compare(const void *a, const void *b) {
    Person *p1 = (Person*)a;
    Person *p2 = (Person*)b;
    switch (sort_field) {
        case 0: return strcmp(p1->name, p2->name);
        case 1: return p1->year - p2->year;
        case 2: return p1->gender - p2->gender;
        case 3:
            if (p1->height > p2->height) return 1;
            if (p1->height < p2->height) return -1;
            return 0;
        default: return 0;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Person people[200];
    FILE *file = fopen("data.txt", "r");
    int count = 0;
    while (fscanf(file, "%s %d %c %f", people[count].name, &people[count].year, &people[count].gender, &people[count].height) == 4 && count < 200) {
        count++;
    }
    fclose(file);

    printf("сортировка по: 0-имя, 1-год, 2-пол, 3-рост: ");
    scanf("%d", &sort_field);

    qsort(people, count, sizeof(Person), compare);

    for (int i = 0; i < count; i++) {
        printf("%s %d %c %.2f\n", people[i].name, people[i].year, people[i].gender, people[i].height);
    }

    return 0;
}
