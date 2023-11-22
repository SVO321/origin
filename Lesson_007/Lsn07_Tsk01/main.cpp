#include <iostream>
#include <windows.h>

#define MODE 1
#define ADD(a, b) (a + b)

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int input_value_one, input_value_two;

#if !defined MODE
    #error Need to define MODE.
    return 0;
#endif

#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
    Sleep(2000);
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1:";
    std::cin >> input_value_one;
    std::cout << "Введите число 2:";
    std::cin >> input_value_two;
    std::cout << "Результат сложения:" << ADD(input_value_one, input_value_two) << std::endl;
    Sleep(2000);
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    Sleep(2000);
#endif
    return 0;
}