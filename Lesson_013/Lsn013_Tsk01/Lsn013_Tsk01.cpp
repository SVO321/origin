#include <windows.h>
#include <clocale>
#include <iostream>

static int Fibanachi(int size) {
    int* arr = new int[size];
    std::cout << "Числа Фибоначчи: ";
    if (size == 0) {
        arr[0] = 0;
        std::cout << arr[0] << " ";
    }
    else if (size == 1) {
        arr[0] = 0;
        arr[1] = 1;
        std::cout << arr[0] << " " << arr[1] << " ";
    }
    else {
        for (int i = 0; i <= 1; i++)
        {
            arr[i] = i;
            std::cout << arr[i] << " ";
        }
        for (int i = 2; i < size; i++)
        {
            arr[i] = arr[i - 2] + arr[i - 1];
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
    return arr[size];
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int size;
    std::cout << "Введите целое число: ";
    std::cin >> size;
    Fibanachi(size);
    Sleep(2000);
    return 0;
}