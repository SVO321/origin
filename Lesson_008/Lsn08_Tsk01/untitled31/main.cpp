#include <iostream>
#include <windows.h>
#include "string"

int Function(std::string input_str, int forbidden_length) {
    if (input_str.length() == forbidden_length) {
        throw std::exception();
    }
    else return input_str.length();
}

int main() {
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int forbidden_length, str_length;
    std::string input_str; bool checked = false;
    do {
        std::cout << "������� ��������� �����: ";
        std::cin >> forbidden_length;
        std::cout << "������� �����: ";
        std::cin >> input_str;
        try {
            str_length = Function(input_str, forbidden_length);
            std::cout << "����� ����� " << '"' << input_str << '"' << " ����� " << str_length << std::endl;
            checked = true;
        }
        catch (const std::exception& bad_length)
        {
            std::cout << bad_length.what() << std::endl;
            std::cout << "�� ����� ����� ��������� �����! �� ��������" << std::endl;
            checked = false;
            Sleep(5000);
        }
    } while (checked);
    return 0;
}