#include <windows.h>
#include <locale.h>
#include <iostream>
#include <algorithm>
using namespace std;

static int Partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int pIndex = left;
    for (int i = left; i < right; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex], arr[right]);
    return pIndex;
}

static void QuickSort(int arr[], int left, int right)
{
    if (left >= right) 
    {
        return;
    }
    int pivot = Partition(arr, left, right);
    QuickSort(arr, left, pivot - 1);
    QuickSort(arr, pivot + 1, right);
}

static void Print(int* arr, int right)
{
    std::cout << "The sorted array is: ";
    for (int i = 0; i <= right; i++)
    {
        if (arr[i] == arr[right])
        {
            std::cout << arr[i] << std::endl << std::endl;
        }
        else
        {
            std::cout << arr[i] << ", ";
        }
    }
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int left = 0, right = 0;
    int arr_a[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
    int arr_b[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
    int arr_c[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };
    
    std::cout << "The sourced array is: 3, 43, 38, 29, 18, 72, 57, 61, 2, 33" << std::endl;
    right = sizeof(arr_a) / sizeof(arr_a[0]);
    QuickSort(arr_a, left, right - 1);
    Print(arr_a, right - 1);
    
    std::cout << "The sourced array is: 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74" << std::endl;
    right = sizeof(arr_b) / sizeof(arr_b[0]);
    QuickSort(arr_b, left, right - 1);
    Print(arr_b, right - 1);

    std::cout << "The sourced array is: 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62" << std::endl;
    right = sizeof(arr_c) / sizeof(arr_c[0]);
    QuickSort(arr_c, left, right - 1);
    Print(arr_c, right - 1);

    Sleep(5000);
    return 0;
}