#include <windows.h>
#include <clocale>
#include <iostream>

static void Fibanachi(int* arr, int size)
{
    std::cout << "Числа Фибоначи: ";
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
}

static void Dif_Fibanachi(int* arr, int size, int prev_size)
{
    for (int i = (prev_size + 1); i <= size; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
        std::cout << arr[i] << " ";
    }
}

static void Print(int* arr, int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int size, prev_size;
    bool check = false;
    int* arr = nullptr;
    do {
        check = false;
        std::cout << "Введите целое число или введите '0' чтобы закончить: ";
        std::cin >> size;
        if (size == 0) {
            check = true;
        }
        if (arr == nullptr) {
            int* arr = new int[size];
            prev_size = size;
            Fibanachi(arr, size);
        }
        else {
            if (prev_size == size) {
                Print(arr, size);
            }
            else if (prev_size < size) {
                Print(arr, prev_size);
                Dif_Fibanachi(arr, size, prev_size);
            }
            else if (prev_size > size) {
                Print(arr, size);
            }
        }
    } while (check != true);
    delete[] arr;
    return 0;
}