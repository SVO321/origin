#include <iostream>
#include <windows.h>
#include "string"

class Counter {
private:
    int priv_input_value = 0;
public:
    Counter(int priv_input_value) {
        this->priv_input_value = priv_input_value;
    }
    void sum_priv_input_value()
    {
        priv_input_value++;
    }
    void subtraction_priv_input_value()
    {
        priv_input_value--;
    }
    void print_priv_input_value()
    {
        std::cout << priv_input_value << std::endl;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int input_value;
    std::string choice_value;
    std::string choice_operation;
    bool global_check, local_check;
    global_check = true;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choice_value;
    if (choice_value == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> input_value;
    }
    else (input_value = 1);
    Counter Counter(input_value);
    do {
        local_check = true;
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> choice_operation;
        if (choice_operation == "+") {
            Counter.sum_priv_input_value();
        }
        if (choice_operation == "-") {
            Counter.subtraction_priv_input_value();
        }
        if (choice_operation == "=") {
            Counter.print_priv_input_value();
        }
        if (choice_operation == "x") {
            std::cout << "До свидания!" << std::endl;
            local_check = false;
        }
    } while (local_check);
    Sleep(2000);
    return 0;
}