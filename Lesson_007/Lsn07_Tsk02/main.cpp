#include <iostream>
#include <windows.h>

#define SUB(a, b) (a - b)

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int a = 6, b = 5, c = 2;
    std::cout << SUB(a, b) << std::endl;
    std::cout << SUB(a, b) * c << std::endl;
    std::cout << (SUB(a, (b + c)) * c) << std::endl;
    return 0;
}