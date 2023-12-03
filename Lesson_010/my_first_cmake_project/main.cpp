#include <iostream>
#include "string"
#include <windows.h>

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    std::string input_name;
    std::cout << "??????? ???:";
    std::cin >> input_name;
    std::cout << "????????????, " << input_name << "!" << std::endl;
    Sleep(10000);
    return 0;
}
