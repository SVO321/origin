#include <iostream>
#include <windows.h>
#include <fstream>

void open_error(char file_name[])
{
    std::cout << "I can't open the file - " << file_name << std::endl;
}

int* create_array(int size)
{
    return new int[size];
}

void type_array_two(std::ofstream* fout, int size, int* array)
{
    *fout << size << std::endl;
    *fout << array[size - 1] << " ";
    for (int i = 0; i < (size - 1); i++)
    {
        if (i == (size - 2))
        {
            *fout << array[i] << std::endl;
        }
        else
        {
            *fout << array[i] << " ";
        }
    }
}

void type_array_one(std::ofstream* fout, int size, int* array)
{
    *fout << size << std::endl;
    for (int i = 1; i < size; i++)
    {
        if (i == (size - 1))
        {
            *fout << array[i] << " ";
            *fout << array[0] << std::endl;
        }
        else
        {
            *fout << array[i] << " ";
        }
    }
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    std::cout << "Начало\n";
    int size_one, size_two, input;
    char file_in[] = "in.txt";
    char file_out[] = "out.txt";

    std::ifstream fin(file_in);
    if (!fin.is_open())
    {
        open_error(file_in); return 0;
    }
    std::ofstream fout(file_out);
    if (!fout.is_open())
    {
        open_error(file_out); return 0;
    }

    fin >> size_one;
    int* array_one = create_array(size_one);
    for (int i = 0; i < size_one; i++)
    {
        fin >> input;
        array_one[i] = input;
    }
    fin >> size_two;
    int* array_two = create_array(size_two);
    for (int i = 0; i < size_two; i++)
    {
        fin >> input;
        array_two[i] = input;
    }
    type_array_two(&fout, size_two, array_two);
    type_array_one(&fout, size_one, array_one);

    fin.close();
    fout.close();
    delete[] array_one;
    delete[] array_two;
    std::cout << "Конец\n";
    return 0;
}