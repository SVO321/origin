#include <iostream>
#include <windows.h>
#include "calculator.h"

void clear_console()
{
#ifdef _WIN32
    std::system("CLS");
#else
    std::system("clear");
#endif
}
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int input_value;
    std::string choice_value;
    std::string choice_operation;
    bool local_check;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choice_value;
    if (choice_value == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> input_value;
    }
    else { input_value = 1; }
    Calculator Calculator(input_value);

    do {
        local_check = true;
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> choice_operation;
        if (choice_operation == "+") {
            Calculator.sum_priv_input_value();
        }
        if (choice_operation == "-") {
            Calculator.subtraction_priv_input_value();
        }
        if (choice_operation == "=") {
            Calculator.print_priv_input_value();
        }
        if (choice_operation == "x") {
            std::cout << "До свидания!" << std::endl;
            local_check = false;
        }
    } while (local_check);
    Sleep(2000);
    return 0;
}