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
private:
    double num1, num2;
public:
    Calculator() {
        this->num1 = 1, this->num2 = 1;
    }
    Calculator(double num1, double num2) 
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    double add()
    {
        return (num1 + num2);
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else return false;
    }
    bool set_num2(double num2)
    {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else return false;
    }
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
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
            setnum1 = calc.set_num1(num1);
            if (setnum1 == true) {
                local_check = false;
            }
            if (setnum1 == false) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (local_check);
        do {
            local_check = true;
            std::cout << "Введите num2: ";
            std::cin >> num2;
            setnum2 = calc.set_num2(num2);
            if (setnum2 == true) {
                local_check = false;
            }
            if (setnum2 == false) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (local_check);
        Calculator Calculator(num1, num2);
        sum = calc.add();
        std::cout << "num1 + num2 = " << sum << std::endl;

        subtract12 = calc.subtract_1_2();
        subtract12 = calc.subtract_1_2();
        std::cout << "num1 - num2 = " << subtract12 << std::endl;

        subtract21 = calc.subtract_2_1();
        std::cout << "num2 - num1 = " << subtract21 << std::endl;

        mult = calc.multiply();
        std::cout << "num1 * num2 = " << mult << std::endl;

        divide12 = calc.divide_1_2();
        std::cout << "num1 / num2 = " << divide12 << std::endl;

        divide21 = calc.divide_2_1();
        std::cout << "num2 / num1 = " << divide21 << std::endl;
        Sleep(2000);
        std::cout << "Хотите продолжить - наберите '1', хотите выйти - наберите '0': ";
        std::cin >> input;
        if (input > 0) {
            global_check = true;
        }
        else global_check = false;
        clear_console();
    } while (global_check);
    return 0;
}