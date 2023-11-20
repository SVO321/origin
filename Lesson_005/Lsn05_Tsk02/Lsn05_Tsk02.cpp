#include <iostream>
#include "string"
#include <windows.h>

class Figure
{
protected:
    std::string sides_name = "Стороны\t";
    std::string angles_name = "Углы\t";
    std::string name;
public:
    virtual void PrintInfo() {}
};

class Triangle : public Figure
{
protected:
    int side_length_a;
    int side_length_b;
    int side_length_c;
    int angle_value_A;
    int angle_value_B;
    int angle_value_C;
    std::string name;
public:
    Triangle(int in_side_length_a, int in_side_length_b, int in_side_length_c,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
    {
        side_length_a = in_side_length_a, side_length_b = in_side_length_b, side_length_c = in_side_length_c,
            angle_value_A = in_angle_value_A, angle_value_B = in_angle_value_B, angle_value_C = in_angle_value_C;
        name = "Фигура";
    }
    Triangle()
    {
        this->side_length_a = 10;
        this->side_length_b = 20;
        this->side_length_c = 30;
        this->angle_value_A = 50;
        this->angle_value_B = 60;
        this->angle_value_C = 70;
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Треугольник";;
    }
};

class RightTriangle : public Triangle
{
public:
    RightTriangle() {
        this->angle_value_C = 90;
    }
public:
    RightTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C)
        : Triangle(in_side_length_a, in_side_length_b, in_side_length_c, in_angle_value_A,
            in_angle_value_B, in_angle_value_C)
    {
        name = "Прямоугольный треугольник";
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Прямоугольный треугольник";
    }
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle()
    {
        this->side_length_c = 10;
        this->angle_value_C = 50;
    }
public:
    IsoscelesTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C)
        : Triangle(in_side_length_a, in_side_length_b, in_side_length_c, in_angle_value_A,
            in_angle_value_B, in_angle_value_C)
    {
        name = "Равнобедренный треугольник";
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Равнобедренный треугольник";
    }
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle()
    {
        this->side_length_a = 30;
        this->side_length_b = 30;
        this->angle_value_A = 60;
        this->angle_value_C = 60;

    }
public:
    EquilateralTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C)
        : Triangle(in_side_length_a, in_side_length_b, in_side_length_c, in_angle_value_A,
            in_angle_value_B, in_angle_value_C)
    {
        name = "Равносторонний треугольник";
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Равносторонний треугольник";
    }
};

class Quadrangle : public Figure
{
protected:
    int side_length_a;
    int side_length_b;
    int side_length_c;
    int side_length_d;
    int angle_value_A;
    int angle_value_B;
    int angle_value_C;
    int angle_value_D;
    std::string name;
public:
    Quadrangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
        : side_length_a(in_side_length_a),
        side_length_b(in_side_length_b),
        side_length_c(in_side_length_c),
        side_length_d(in_side_length_d),
        angle_value_A(in_angle_value_A),
        angle_value_B(in_angle_value_B),
        angle_value_C(in_angle_value_C),
        angle_value_D(in_angle_value_D)
    {
        name = "Четырехугольник";
    }
    Quadrangle()
    {
        this->side_length_a = 10;
        this->side_length_b = 20;
        this->side_length_c = 30;
        this->side_length_d = 40;
        this->angle_value_A = 50;
        this->angle_value_B = 60;
        this->angle_value_C = 70;
        this->angle_value_D = 80;
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Четырехугольник";
    }
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
        : Quadrangle(in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
            in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
    {
        name = "Параллелограмм";
    }
    Parallelogram()
    {
        this->side_length_a = 20;
        this->side_length_b = 30;
        this->side_length_c = 20;
        this->side_length_d = 30;
        this->angle_value_A = 30;
        this->angle_value_B = 40;
        this->angle_value_C = 30;
        this->angle_value_D = 40;
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Параллелограмм";
    }
};

class RectangleF : public Quadrangle
{
public:
    RectangleF(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
        : Quadrangle(in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
            in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
    {
        name = "Прямоугольник";
    }
    RectangleF()
    {
        this->side_length_c = 10;
        this->side_length_d = 20;
        this->angle_value_A = 90;
        this->angle_value_B = 90;
        this->angle_value_C = 90;
        this->angle_value_D = 90;
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Прямоугольник";
    }
};

class Romb : public Parallelogram
{
public:
    Romb(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
        : Parallelogram(in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
            in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
    {
        name = "Ромб";
    }
    Romb()
    {
        this->side_length_a = 30;
        this->side_length_c = 30;
    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Ромб";
    }
};

class Square : public RectangleF
{
public:
    Square(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
        : RectangleF(in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
            in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
    {
        name = "Квадрат";
    }
    Square()
    {
        this->side_length_a = 20;
        this->side_length_c = 20;

    }
    void PrintInfo() override {
        name = GetName();
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
    std::string GetName()
    {
        return name = "Квадрат";
    }
};

void print_info(Figure* figure)
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

    Sleep(100000);
    return 0;
}