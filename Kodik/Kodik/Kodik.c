#include <stdio.h>

int main() {
    // This is a simple C program
    // It asks for your name and age

    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello %s!\n", name);
    printf("You are %d years old.\n", age);

    if (age >= 18) {
        printf("You are an adult.\n");
    }
    else {
        printf("You are a minor.\n");
    }

    return 0;
}