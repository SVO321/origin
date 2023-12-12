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
#include "locale.h"

static void print_info(Figure* figure)
{
    figure->PrintInfo();
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    Triangle triangle1;
    print_info(&triangle1);

    RightTriangle RightTriangle1;
    print_info(&RightTriangle1);

    IsoscelesTriangle IsoscelesTriangle1;
    print_info(&IsoscelesTriangle1);

    EquilateralTriangle EquilateralTriangle1;
    print_info(&EquilateralTriangle1);

    Quadrangle Quadrangle1;
    print_info(&Quadrangle1);

    RectangleF RectangleF1;
    print_info(&RectangleF1);

    Square Square1;
    print_info(&Square1);

    Parallelogram Parallelogram1;
    print_info(&Parallelogram1);

    Romb Romb1;
    print_info(&Romb1);

    Sleep(8000);
    return 0;
}