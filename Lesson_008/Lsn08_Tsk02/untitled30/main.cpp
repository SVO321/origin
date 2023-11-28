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
#include "domain_error.h"

void Print(Figure* figure)
{
    figure->Print();
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int side_length_a, side_length_b, side_length_c, side_length_d;
    int angle_value_A, angle_value_B, angle_value_C, angle_value_D;
    std::string name; int sides_amount;
    try
    {
        Triangle Triangle1(side_length_a = 10, side_length_b = 20, side_length_c = 30,
                           angle_value_A = 60, angle_value_B = 60, angle_value_C = 60,
                           name = "Треугольник", sides_amount = 3); // создаем один объект
        Print(&Triangle1);

        RightTriangle RightTriangle1(side_length_a = 10, side_length_b = 20, side_length_c = 30,
                                     angle_value_A = 50, angle_value_B = 60, angle_value_C = 90,
                                     name = "Прямоугольный треугольник", sides_amount = 3);
        Print(&RightTriangle1);

        IsoscelesTriangle IsoscelesTriangle1(side_length_a = 10, side_length_b = 20, side_length_c = 10,
                                             angle_value_A = 50, angle_value_B = 60, angle_value_C = 50,
                                             name = "Равнобедренный треугольник", sides_amount = 3);
        Print(&IsoscelesTriangle1);

        EquilateralTriangle EquilateralTriangle1(side_length_a = 30, side_length_b = 30, side_length_c = 30,
                                                 angle_value_A = 60, angle_value_B = 60, angle_value_C = 60,
                                                 name = "Равносторонний треугольник", sides_amount = 3);
        Print(&EquilateralTriangle1);

        Quadrangle Quadrangle1(side_length_a = 10, side_length_b = 20, side_length_c = 30, side_length_d = 40,
                               angle_value_A = 90, angle_value_B = 90, angle_value_C = 90, angle_value_D = 90,
                               name = "Четырехугольник", sides_amount = 4);
        Print(&Quadrangle1);

        RectangleF RectangleF1(side_length_a = 10, side_length_b = 20, side_length_c = 10, side_length_d = 20,
                               angle_value_A = 90, angle_value_B = 90, angle_value_C = 90, angle_value_D = 90,
                               name = "Прямоугольник", sides_amount = 4);
        Print(&RectangleF1);

        Square Square1(side_length_a = 20, side_length_b = 20, side_length_c = 20, side_length_d = 20,
                               angle_value_A = 90, angle_value_B = 90, angle_value_C = 90, angle_value_D = 90,
                               name = "Квадрат", sides_amount = 4);
        Print(&Square1);

        Parallelogram Parallelogram1(side_length_a = 20, side_length_b = 30, side_length_c = 20, side_length_d = 30,
                       angle_value_A = 30, angle_value_B = 40, angle_value_C = 30, angle_value_D = 40,
                       name = "Параллелограмм", sides_amount = 4);
        Print(&Parallelogram1);

        Romb Romb1(side_length_a = 20, side_length_b = 30, side_length_c = 20, side_length_d = 30,
                                     angle_value_A = 30, angle_value_B = 40, angle_value_C = 30, angle_value_D = 40,
                                     name = "Параллелограмм", sides_amount = 4);
        Print(&Romb1);

    }
    catch (const Domain_Error& error) // обработка ошибок
    {
        std::cout << "Class Domain_Error: " << error.what() << std::endl;
    }
    catch (const std::exception&)   // обработка остальных исключений
    {
        std::cout << "Something wrong..."<< std::endl;
    }
    Sleep(100000);
    return 0;
}