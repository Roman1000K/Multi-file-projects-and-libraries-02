#include<iostream>
#include<Windows.h> 
#include "Counter.cpp"




int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : ";
    std::string decision;
    std::cin >> decision;

    int initial = 0;
    if (decision == "да")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial;
    }
   
    Counter count(initial);

    while (true)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        char kom;
        std::cin >> kom;
        switch (kom)
        {
        case '+':
            count.increase();
            break;
        case '-':
            count.decrease();
            break;
        case '=':
            count.currentValue();
            break;
        default:
            std::cout << "До свидания!";
            exit(0);
        }
    }

    return 0;
}