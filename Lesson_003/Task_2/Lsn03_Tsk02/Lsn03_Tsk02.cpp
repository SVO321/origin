#include <iostream>
#include <windows.h>
#include "string"

class Counter {
private:
    int priv_input_value = 0;
public:
    int get_priv_input_value()
    {
        return priv_input_value;
    }
    void set_priv_sum(int value)
    {
        priv_input_value = value;
    }
    void set_priv_subtraction(int value)
    {
        priv_input_value = value;
    }
};

int main(int argc, char** argv)
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int input_value, current_value;
    std::string choice_value;
    std::string choice_operation;
    bool global_check, local_check;
    Counter count;
    global_check = true;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choice_value;
    if (choice_value == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> input_value;
    }
    else (input_value = 1);
    do {
        local_check = true;
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> choice_operation;
        if (choice_operation == "+") {
            input_value++;
            count.set_priv_sum(input_value);
        }
        if (choice_operation == "-") {
            input_value--;
            count.set_priv_subtraction(input_value);
        }
        if (choice_operation == "=") {
            current_value = count.get_priv_input_value();
            std::cout << current_value << std::endl;
        }
        if (choice_operation == "x") {
            std::cout << "До свидания!" << std::endl;
            local_check = false;
        }
    } while (local_check);
    Sleep(2000);
    return 0;
}