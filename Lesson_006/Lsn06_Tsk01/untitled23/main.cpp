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
        std::cout << "������� ������ �����: ";
        std::cin >> number_one;
        std::cout << "������� ������ �����: ";
        std::cin >> number_two;
        std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������, 6 - ���������� ��������): ";
        std::cin >> operation_input;
        switch (operation_input) {
            case 1:
                std::cout << number_one << " ���� " << number_two << " = " << Addition(number_one, number_two) << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 2:
                std::cout << number_one << " ����� " << number_two << " = " << Subtraction(number_one, number_two)
                          << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 3:
                std::cout << number_one << " �������� �� " << number_two << " = "
                          << Multiplication(number_one, number_two) << "\n";
                checked = true;
                break;
            case 4:
                std::cout << number_one << " ��������� �� " << number_two << " = " << Division(number_one, number_two)
                          << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 5:
                std::cout << number_one << " � ������� " << number_two << " = " << pow(number_one, number_two) << "\n";
                checked = true;
                Sleep(2000);
                break;
            case 6:
                std::cout << "�� ��������"<< "\n";
                checked = false;
                Sleep(2000);
                break;
            default:
                std::cout << "������������ �����!\n";
                checked = false;
                break;
            }
    } while (checked);
    return 0;
}
