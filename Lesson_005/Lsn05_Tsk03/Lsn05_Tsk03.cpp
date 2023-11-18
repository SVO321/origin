#include <iostream>
#include "string"
#include <windows.h>

class Figure
{
protected:
    std::string sides_name = "Стороны\t";
    std::string angles_name = "Углы\t";
    std::string sides_amount_name = "Количество сторон";
    std::string name;
    int sides_amount;
    bool figure_type;
public:
    Figure()
    {
        this->sides_amount = 0;
        this->name = "Фигура";
    }
    virtual void PrintInfo()
    {
        std::cout << name << std::endl;
        figure_type = Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else std::cout << "Неправильная" << std::endl;
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
    }
    virtual bool Check()
    {
        if (sides_amount > 0) {
            return figure_type = false;
        }
        else { return figure_type = true; }
    }
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
public:
    Triangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
        : side_length_a(in_side_length_a),
        side_length_b(in_side_length_b),
        side_length_c(in_side_length_c),
        angle_value_A(in_angle_value_A),
        angle_value_B(in_angle_value_B),
        angle_value_C(in_angle_value_C)
    {
        name = "Треугольник";
    }
    Triangle()
    {
        this->side_length_a = 10;
        this->side_length_b = 20;
        this->side_length_c = 30;
        this->angle_value_A = 50;
        this->angle_value_B = 60;
        this->angle_value_C = 70;
        this->sides_amount = 3;
        this->name = "\nТреугольник";
    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
    }
    bool Check() override
    {
        if ((side_length_a == side_length_b) & (side_length_b == side_length_c)) {
            return figure_type = true;
        }
        else if ((angle_value_A & angle_value_B & angle_value_C) == 60) {
            return figure_type = true;
        }
        else if ((angle_value_A + angle_value_B + angle_value_C) == 180) {
            return figure_type = true;
        }
        else {
            return figure_type = false;
        }
    }
};

class RightTriangle : public Triangle
{
public:
    RightTriangle() {
        this->angle_value_C = 90;
        this->name = "\nПрямоугольный треугольник";
    }
public:
    //    RightTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
    //            : side_length_a(in_side_length_a),
    //              side_length_b(in_side_length_b),
    //              side_length_c(in_side_length_c),
    //              angle_value_A(in_angle_value_A),
    //              angle_value_B(in_angle_value_B),
    //              angle_value_C(in_angle_value_C)
    //    {
    //        name = "Прямоугольный треугольник";
    //    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Triangle::Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else std::cout << "Неправильная" << std::endl;
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
    }
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle()
    {
        this->side_length_c = 10;
        this->angle_value_C = 50;
        this->name = "\nРавнобедренный треугольник";
    }
public:
    //    RightTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
    //            : side_length_a(in_side_length_a),
    //              side_length_b(in_side_length_b),
    //              side_length_c(in_side_length_c),
    //              angle_value_A(in_angle_value_A),
    //              angle_value_B(in_angle_value_B),
    //              angle_value_C(in_angle_value_C)
    //    {
    //        name = "Равнобедренный треугольник";
    //    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Triangle::Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
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
        this->name = "\nРавносторонний треугольник";
    }
public:
    //    RightTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
    //            : side_length_a(in_side_length_a),
    //              side_length_b(in_side_length_b),
    //              side_length_c(in_side_length_c),
    //              angle_value_A(in_angle_value_A),
    //              angle_value_B(in_angle_value_B),
    //              angle_value_C(in_angle_value_C)
    //    {
    //        name = "Равносторонний треугольник";
    //    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Triangle::Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
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
public:
    Quadrangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
        : side_length_a(in_side_length_a),
        side_length_b(in_side_length_b),
        side_length_c(in_side_length_c),
        angle_value_A(in_angle_value_A),
        angle_value_B(in_angle_value_B),
        angle_value_C(in_angle_value_C)
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
        this->sides_amount = 4;
        this->name = "\nЧетырехугольник";
    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
    bool Check() override
    {
        if ((side_length_a == side_length_b) & (side_length_b == side_length_c) & (side_length_c == side_length_d)) {
            return figure_type = true;
        }
        else if ((angle_value_A == angle_value_B) & (angle_value_B == angle_value_C) & (angle_value_C == angle_value_D)) {
            return figure_type = true;
        }
        else { return figure_type = false; }
    }
};

class RectangleF : public Quadrangle
{
public:
    //    RectangleF(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
//            : side_length_a(in_side_length_a),
//              side_length_b(in_side_length_b),
//              side_length_c(in_side_length_c),
//              angle_value_A(in_angle_value_A),
//              angle_value_B(in_angle_value_B),
//              angle_value_C(in_angle_value_C)
//    {
//        name = "Прямоугольник";
//    }
    RectangleF()
    {
        this->side_length_c = 10;
        this->side_length_d = 20;
        this->angle_value_A = 90;
        this->angle_value_B = 90;
        this->angle_value_C = 90;
        this->angle_value_D = 90;
        this->name = "\nПрямоугольник";
    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Quadrangle::Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
};

class Square : public RectangleF {
public:
    //    Square(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
//            : side_length_a(in_side_length_a),
//              side_length_b(in_side_length_b),
//              side_length_c(in_side_length_c),
//              angle_value_A(in_angle_value_A),
//              angle_value_B(in_angle_value_B),
//              angle_value_C(in_angle_value_C)
//    {
//        name = "Квадрат";
//    }
    Square() {
        this->side_length_a = 20;
        this->side_length_c = 20;
        this->name = "\nКвадрат";
    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Quadrangle::Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
};

class Parallelogram : public Quadrangle
{
public:
    //    Parallelogram(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
    //            : side_length_a(in_side_length_a),
    //              side_length_b(in_side_length_b),
    //              side_length_c(in_side_length_c),
    //              angle_value_A(in_angle_value_A),
    //              angle_value_B(in_angle_value_B),
    //              angle_value_C(in_angle_value_C)
    //    {
    //        name = "Параллелограмм";
    //    }
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
        this->name = "\nПараллелограмм";
    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Quadrangle::Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }
};

class Romb : public Parallelogram
{
public:
    //    Romb(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
//            : side_length_a(in_side_length_a),
//              side_length_b(in_side_length_b),
//              side_length_c(in_side_length_c),
//              angle_value_A(in_angle_value_A),
//              angle_value_B(in_angle_value_B),
//              angle_value_C(in_angle_value_C)
//    {
//        name = "Ромб";
//    }
    Romb()
    {
        this->side_length_a = 30;
        this->side_length_c = 30;
        this->name = "\nРомб";
    }
    void PrintInfo() override {
        std::cout << name << std::endl;
        figure_type = Quadrangle::Check();
        if (figure_type) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
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
    Figure figure1;
    print_info(&figure1);

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