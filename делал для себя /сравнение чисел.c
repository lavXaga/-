#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int nom;
    int num;
    std::cout << "Введите число nom: ";
    std::cin >> nom;
    std::cout << "Введите число num: ";
    std::cin >> num;
    if (num > nom) {
        std::cout<<"число "<<num<<" определенно больше "<<nom;
    }
    else if (num < nom){

            std::cout<<" число "<<num<<" определенно меньше "<<nom;
    }

    else {
        std::cout<<" число "<<num<<" = "<<nom;
    }

 
    return 0;   
}
 
