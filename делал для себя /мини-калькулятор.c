#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    
    float num1, num2, res;
    cout << "введите 2 числа через пробел : ";
    cin >> num1 >> num2;

    char op;
    cout<<"Введите оператор  +  -  /  *  :";
    cin >> op;

    if (op == '+')
        res=num1+num2;
    else if (op == '-')
        res=num1-num2;
    else if (op == '*')
        res=num1*num2;
    else if (op == '/')
        res=num1/num2;
    cout<<res<<endl;





    return 0;
}
