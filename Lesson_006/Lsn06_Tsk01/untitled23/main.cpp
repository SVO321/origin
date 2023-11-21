#include <iostream>
#include <windows.h>
#include <cmath>
#include "operations.h"

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    double number_one, number_two;
    int operation_input;
    bool checked = true;
    do {
        checked = false;
        std::cout << "¬ведите первое число: ";
        std::cin >> number_one;
        std::cout << "¬ведите второе число: ";
        std::cin >> number_two;
        std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - прекратить операцию): ";
        std::cin >> operation_input;
        switch (operation_input) {
            case 1:
                std::cout << number_one << " плюс " << number_two << " = " << Addition(number_one, number_two) << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 2:
                std::cout << number_one << " минус " << number_two << " = " << Subtraction(number_one, number_two)
                          << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 3:
                std::cout << number_one << " умножить на " << number_two << " = "
                          << Multiplication(number_one, number_two) << "\n";
                checked = true;
                break;
            case 4:
                std::cout << number_one << " разделить на " << number_two << " = " << Division(number_one, number_two)
                          << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 5:
                std::cout << number_one << " в степени " << number_two << " = " << pow(number_one, number_two) << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 6:
                std::cout << "ƒо свидани€"<< "\n";
                checked = false;
                Sleep(2000);
                break;
            default:
                std::cout << "Ќеправильный номер!\n";
                checked = false;
                break;
            }
    } while (checked);
    return 0;
}
