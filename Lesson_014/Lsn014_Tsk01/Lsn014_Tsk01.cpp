#include <windows.h>
#include <locale.h>
#include <iostream>

static void MergeSort(int* arr, int* arr_left, int N1, int* arr_right, int N2)
{
    int i = 0, j = 0, k = 0;
    while (i < N1 && j < N2)
    {
        if (arr_left[i] <= arr_right[j]) {
            arr[k] = arr_left[i];
            i++;
        }
        else {
            arr[k] = arr_right[j];
            j++;
        }
        k++;
    }

    while (i < N1)
    {
        arr[k] = arr_left[i];
        i++;
        k++;
    }

    while (j < N2)
    {
        arr[k] = arr_right[j];
        j++;
        k++;
    }
}

static int Sort_Left_Right(int* arr, int size)
{
 bool swapped = false;
    do
    {
        swapped = false;
        for (int i = 1; i < size; i++)
        {
            if (arr[i - 1] <= arr[i]) {
                arr[i];
            }
            else {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }
    } while (swapped);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
 return *arr;
}

static void Split(int* arr, int right)
{
    
    int left = 0; int size_count = 0;
    int middle = (left + right) / 2;
    int N1 = middle + 1;
    int N2 = right - middle;
    int* arr_left = new int[N1];
    int* arr_right = new int[N2];

    for (int i = 0; i < N1; i++)
    {
        arr_left[i] = arr[i];
        std::cout << arr_left[i] << " ";
    }
    std::cout << std::endl;

    for (int j = 0; j < N2; j++)
    {
        arr_right[j] = arr[N2 + size_count];
        size_count += 1;
        std::cout << arr_right[j] << " ";
    }
    std::cout << std::endl;

    Sort_Left_Right(arr_left, N1);
    Sort_Left_Right(arr_right, N2);
    MergeSort(arr, arr_left, N1, arr_right, N2);
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
    int size, left = 0, right;
    
    size = 10;
    right = size - 1;
    std::cout << "The sourced array is: 3, 43, 38, 29, 18, 72, 57, 61, 2, 33" << std::endl;
    int* arr = new int[size] { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
    Split(arr, right);
    Print(arr, right);
    delete[] arr;

    size = 15;
    right = size - 1;
    std::cout << "The sourced array is: 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74" << std::endl;
    int* arr_15 = new int[size] { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
    Split(arr_15, right);
    Print(arr_15, right);
    delete[] arr_15;

    size = 18;
    right = size - 1;
    std::cout << "The sourced array is: 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62" << std::endl;
    int* arr_18 = new int[size] { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };
    Split(arr_18, right);
    Print(arr_18, right);
    delete[] arr_18;

    Sleep(5000);
    return 0;
}