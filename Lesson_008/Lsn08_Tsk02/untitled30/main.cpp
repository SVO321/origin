#include <iostream>
#include "string"
#include <windows.h>
#include "figure.h"
#include "triangle.h"
#include "righttriangle.h"
#include "isoscelestriangle.h"
#include "equilateraltriangle.h"
#include "quadrangle.h"
#include "parallelogram.h"
#include "rectanglef.h"
#include "romb.h"
#include "square.h"

void print_info(Figure* figure)
{
    figure->PrintInfo();
}

void Print(Figure* figure)
{
    figure->Print();
}

void TryTriangle (int side_length_a, int side_length_b, int side_length_c, int angle_value_A, int angle_value_B, int angle_value_C, std::string name, int sides_amount)
{
    try
    {
        Triangle Triangle1(side_length_a, side_length_b, side_length_c, angle_value_A, angle_value_B, angle_value_C, name, sides_amount); // создаем один объект
        Triangle1.Print();
    }
    catch (const Domain_Error& error) // обработка ошибок
    {
        std::cout << "Class Domain_Error: " << error.what() << std::endl;
    }
    catch (const std::exception&)   // обработка остальных исключений
    {
        std::cout << "Something wrong..."<< std::endl;
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int side_length_a, side_length_b, side_length_c, side_length_d;
    int angle_value_A, angle_value_B, angle_value_C, angle_value_D;
    std::string name; int sides_amount;

    TryTriangle(side_length_a = 10, side_length_b = 20, side_length_c = 30, angle_value_A = 50, angle_value_B = 60, angle_value_C = 90, name = "Треугольник", sides_amount = 3);

    //Triangle Triangle(side_length_a, side_length_b, side_length_c, angle_value_A, angle_value_B, angle_value_C, name, sides_amount);

    //print_info(&Triangle);

//    RightTriangle RightTriangle1;
//    print_info(&RightTriangle1);
//
//    IsoscelesTriangle IsoscelesTriangle1;
//    print_info(&IsoscelesTriangle1);
//
//    EquilateralTriangle EquilateralTriangle1;
//    print_info(&EquilateralTriangle1);
//
//    Quadrangle Quadrangle1;
//    print_info(&Quadrangle1);
//
//    RectangleF RectangleF1;
//    print_info(&RectangleF1);
//
//    Square Square1;
//    print_info(&Square1);
//
//    Parallelogram Parallelogram1;
//    print_info(&Parallelogram1);
//
//    Romb Romb1;
//    print_info(&Romb1);

    Sleep(100000);
    return 0;
}