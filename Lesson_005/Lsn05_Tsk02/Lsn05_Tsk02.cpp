#include <iostream>
#include "string"
#include <windows.h>

class Figure
{
protected:
    std::string name;
    std::string sides_name = "Ñòîðîíû";
    std::string angles_name = "Óãëû";
public:
    Figure() {}
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
public:
    Triangle()
    {
        this->side_length_a = 10;
        this->side_length_b = 20;
        this->side_length_c = 30;
        this->angle_value_A = 50;
        this->angle_value_B = 60;
        this->angle_value_C = 70;
    }
    void print_info(Triangle* triangle1) {
        PrintInfo();
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
        this->name = "Òðåóãîëüíèê:";
        return name;
    }


};

class RightTriangle : public Triangle {
public:
    RightTriangle() {
        this->angle_value_C = 90;
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
    std::string sides_name = "???????";
    std::string angles_name = "????";
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
    }
    void PrintInfo(std::string name)
    {
        std::cout << name << std::endl;
        std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
        std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
        std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
        std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
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
    }
};

class Romb : public Parallelogram
{
public:
    Romb()
    {
        this->side_length_a = 30;
        this->side_length_c = 30;
    }
};

class Square : public RectangleF
{
public:
    Square()
    {
        this->side_length_a = 20;
        this->side_length_c = 20;

    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    Triangle triangle1;
    print_info(&triangle1);

    //    Triangle().PrintInfo("???????????:");
    //    RightTriangle().PrintInfo("????????????? ???????????:");
    //    IsoscelesTriangle().PrintInfo("?????????????? ???????????:");
    //    EquilateralTriangle().PrintInfo("?????????????? ???????????:");
    //    Quadrangle().PrintInfo("???????????????:");
    //    RectangleF().PrintInfo("?????????????:");
    //    Square().PrintInfo("???????:");
    //    Parallelogram().PrintInfo("??????????????:");
    //    Romb().PrintInfo("????:");
    Sleep(100000);
    return 0;
}