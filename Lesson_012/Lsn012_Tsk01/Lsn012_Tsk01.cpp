#include "string"
#include <windows.h>
#include <locale.h>
#include <iostream>

static void Calculation(int* arr, int search_point, int size)
{
    int count = 0;
    int left = 0; 
    int middle = 0;
    int checked;
    int right = size - 1;
    do  
    {
        checked = 0;
        middle = (left + right) / 2;
        if ((arr[middle]) > search_point) {
            right = middle;
        }
        if ((arr[middle]) < search_point) {
            left = middle + 1;
            middle = (left + right) / 2;
            if ((arr[middle]) > search_point) {
                count = size - middle;
                checked = 1;
            }
        }
        if ((arr[middle]) == search_point) {
            left = middle + 1;
            if (left == size) { checked = 1; count = 0; }
            middle = (left + right) / 2;
            if ((arr[middle]) > search_point) {
                count = size - middle;
                checked = 1;
            }
        }
    } while (checked == 0);
    std::cout << "Количество элементов в массиве больших, чем " << search_point << ": " << count;
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int arr[]{14, 16, 19, 32, 32, 32, 56, 69, 72};
    int size = std::size(arr);
    int search_point = 0;
    std::cout << "Введите точку отсчёта: ";
    std::cin >> search_point;
    Calculation (arr, search_point, size);
    Sleep(5000);
    return 0;
}