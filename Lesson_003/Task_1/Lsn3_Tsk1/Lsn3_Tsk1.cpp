#include <iostream>
#include <windows.h>

void clear_console()
{
#ifdef _WIN32
    std::system("CLS");
#else
    std::system("clear");
#endif
}

class Calculator {
public:
    double num1, num2, sum, subtract12, subtract21, mult, divide12, divide21;
    double add(double num1, double num2)
    {
        return sum = num1 + num2;
    }
    double subtract_1_2(double num1, double num2)
    {
        return subtract12 = num1 - num2;
    }
    double subtract_2_1(double num2, double num1)
    {
        return subtract21 = num2 - num1;
    }
    double multiply(double num1, double num2)
    {
        return mult = num1 * num2;
    }
    double divide_1_2(double num1, double num2)
    {
        return divide12 = num1 / num2;
    }
    double divide_2_1(double num2, double num1)
    {
        return divide21 = num2 / num1;
    }
    bool set_num1(double num1)
    {
        this->num1 = num1;
        return this->num1;
    }
    bool set_num2(double num2)
    {
        this->num2 = num2;
        return this->num2;
    }
};
int main(int argc, char** argv)
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    double num1, num2, sum, subtract12, subtract21, mult, divide12, divide21;
    bool setnum1, setnum2, global_check, local_check;
    int input;
    Calculator calc;
    do {
        global_check = true;

        do {
            local_check = true;
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (num1 == 0) {
                std::cout << "Неверный ввод!" << std::endl;
            }
            else local_check = false;
        } while (local_check);
        do {
            local_check = true;
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (num2 == 0) {
                std::cout << "Неверный ввод!" << std::endl;
            }
            else local_check = false;
        } while (local_check);

        sum = calc.add(num1, num2);
        std::cout << "num1 + num2 = " << sum << std::endl;
        subtract12 = calc.subtract_1_2(num1, num2);
        std::cout << "num1 - num2 = " << subtract12 << std::endl;
        subtract21 = calc.subtract_2_1(num2, num1);
        std::cout << "num2 - num1 = " << subtract21 << std::endl;
        mult = calc.multiply(num1, num2);
        std::cout << "num1 * num2 = " << mult << std::endl;
        divide12 = calc.divide_1_2(num1, num2);
        std::cout << "num1 / num2 = " << divide12 << std::endl;
        divide21 = calc.divide_2_1(num2, num1);
        std::cout << "num2 / num1 = " << divide21 << std::endl;
        setnum1 = calc.set_num1(num1);
        setnum2 = calc.set_num2(num2);
        Sleep(2000);
        std::cout << "Хотите продолжить - наберите '1', если хотите выйти - наберите '0': ";
        std::cin >> input;
        if (input > 0) {
            global_check = true;
        }
        else global_check = false;
        clear_console();
    } while (global_check);
    return 0;
}