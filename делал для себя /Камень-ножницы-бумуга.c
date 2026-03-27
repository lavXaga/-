#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    char names[3][10] = {"Камень", "Ножницы", "Бумага"};
    char again;
    
    srand(time(NULL));
    
    do {
        printf("\n0-Камень, 1-Ножницы, 2-Бумага: ");
        scanf("%d", &player);
        
        computer = rand() % 3;
        
        printf("Ты: %s\n", names[player]);
        printf("Комп: %s\n", names[computer]);
         
        if (player == computer)
            printf("Ничья!\n");
        else if ((player == 0 && computer == 1) ||
                 (player == 1 && computer == 2) ||
                 (player == 2 && computer == 0))
            printf("Ты победил!\n");
        else
            printf("Компьютер победил!\n");
        
        printf("Еще раз? (y/n): ");
        scanf(" %c", &again);
        
    } while (again == 'y' || again == 'Y');
    
    return 0;
}
