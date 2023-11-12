#include <iostream>
#include "string"
#include <windows.h>

class Figure {
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
    int sides_amount;
    std::string sides_name = "Стороны";
    std::string angles_name = "Углы";
    std::string sides_amount_name = "Количество сторон";
    std::string figure_type;
public:
    Figure()
    {
        this->sides_amount = 0;
        this->name = "Фигура";
        figure_type = Check();
    }
    virtual void PrintInfo()
    {
        std::cout << name << std::endl;
        std::cout << figure_type << std::endl;
        std::cout << sides_amount_name << ": " << sides_amount << std::endl;
    }
    virtual std::string Check()
    {
        if (sides_amount > 0) {
            figure_type = "Неправильная";
            return figure_type;
        }
        else {
            figure_type = "Правильная";
            return figure_type;
        }
    }
};

class Triangle : public Figure {
public:
    Triangle()
    {
        this->side_length_a = 10;
        this->side_length_b = 20;
        this->side_length_c = 30;
        this->angle_value_A = 50;
        this->angle_value_B = 60;
        this->angle_value_C = 70;
        this->sides_amount = 3;
        this->name = "\nТреугольник:";
        figure_type = Check();
    }
    void PrintInfo() override
    {
        Figure::PrintInfo();
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
    }

    std::string Check() override
    {
        if ((side_length_a == side_length_b) & (side_length_b == side_length_c)) {
            figure_type = "Правильная";
            return figure_type;
        }
        else if ((angle_value_A & angle_value_B & angle_value_C) == 60) {
            figure_type = "Правильная";
            return figure_type;
        }
        else if ((angle_value_A + angle_value_B + angle_value_C) == 180) {
            figure_type = "Правильная";
            return figure_type;
        }
        else {
            figure_type = "Неправильная";
            return figure_type;
        }
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle() {
        this->angle_value_C = 90;
        this->name = "Прямоугольный треугольник:";
        figure_type = Triangle::Check();
    }
    void PrintInfo() override
    {
        Triangle::PrintInfo();
    }
};

class RightTriangle2 : public RightTriangle {
public:
    RightTriangle2()
    {
        this->angle_value_B = 40;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle()
    {
        this->side_length_c = 10;
        this->angle_value_C = 50;
        this->name = "Равнобедренный треугольник:";
        figure_type = Triangle::Check();
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
        this->name = "Равносторонний треугольник:";
        figure_type = Triangle::Check();
    }
};

class Quadrangle : public Figure {
public:
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
        this->name = "Четырехугольник:";
        figure_type = Check();
    }
    void PrintInfo() override
    {
        Figure::PrintInfo();
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
    }

    std::string Check() override
    {
        if ((side_length_a == side_length_b) & (side_length_b == side_length_c) & (side_length_c == side_length_d)) {
            figure_type = "Правильная";
            return figure_type;
        }
        else if ((angle_value_A == angle_value_B) & (angle_value_B == angle_value_C) & (angle_value_C == angle_value_D)) {
            figure_type = "Правильная";
            return figure_type;
        }
        else {
            figure_type = "Неправильная";
            return figure_type;
        }
    }
};

class RectangleF : public Quadrangle
{
public:
    RectangleF()
    {
        this->side_length_c = 10;
        this->side_length_d = 20;
        this->angle_value_A = 90;
        this->angle_value_B = 90;
        this->angle_value_C = 90;
        this->angle_value_D = 90;
        this->name = "Прямоугольник:";
        figure_type = Check();
    }
};

class Square : public RectangleF
{
public:
    Square()
    {
        this->side_length_a = 20;
        this->side_length_c = 20;
        this->name = "Квадрат:";
        figure_type = Check();
    }
};

class Parallelogram : public Quadrangle
{
public:
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
        this->name = "Параллелограмм:";
        figure_type = Check();
    }
};

class Romb : public Quadrangle
{
public:
    Romb()
    {
        this->side_length_a = 30;
        this->side_length_c = 30;
        this->name = "Ромб:";
        figure_type = Check();
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    Figure().PrintInfo();
    Triangle().PrintInfo();
    RightTriangle().PrintInfo();
    RightTriangle2().PrintInfo();
    IsoscelesTriangle().PrintInfo();
    EquilateralTriangle().PrintInfo();
    Quadrangle().PrintInfo();
    RectangleF().PrintInfo();
    Square().PrintInfo();
    Parallelogram().PrintInfo();
    Romb().PrintInfo();
    Sleep(100000);
    return 0;
}