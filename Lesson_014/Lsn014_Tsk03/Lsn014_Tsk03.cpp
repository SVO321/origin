#include <windows.h>
#include <locale.h>
#include <iostream>

static void CountSort(int arr[], int right, int range)
{
    
    int* arr_output = new int[right];
    int* arr_count = new int[(range + 1)];
    
    for (int i = 0; i < range; i++)
    {
        arr_count[i] = 0;
    }

    for (int i = 0; i < right; i++) 
    {
        arr_count[arr[i]]++;
    }

    int total = 0;
    for (int i = 0; i < range + 1; i++)
    {
        int oldCount = arr_count[i];
        arr_count[i] = total;
        total += oldCount;
    }

    for (int i = 0; i < range; i++)
    {
        arr_output[arr_count[arr[i]]] = arr[i];
        arr_count[arr[i]]++;
    }
    
    std::cout << "The sorted array is: ";
    for (int i = 0; i < range; i++) 
    {
        std::cout << arr_output[i] << " ";
    }
    std::cout << std::endl << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int left = 0, right = 0;
    int arr_a[] = { 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17 };
    int arr_b[] = { 16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21, 17, 11, 17, 16, 12, 11, 16, 22, 23, 16 };
    int arr_c[] = { 21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22, 19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10 };
    
    std::cout << "The sourced array is: 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17" << std::endl;
    right = sizeof(arr_a) / sizeof(arr_a[0]);
    int range_a = 30;
    CountSort(arr_a, right, range_a);

    std::cout << "The sourced array is: 16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21, 17, 11, 17, 16, 12, 11, 16, 22, 23, 16" << std::endl;
    right = sizeof(arr_b) / sizeof(arr_b[0]);
    int range_b = 40;
    CountSort(arr_b, right, range_b);
    

    std::cout << "The sourced array is: 21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22, 19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10" << std::endl;
    right = sizeof(arr_c) / sizeof(arr_c[0]);
    int range_c = 45;
    CountSort(arr_c, right, range_c);
    
    Sleep(5000);
    return 0;
}