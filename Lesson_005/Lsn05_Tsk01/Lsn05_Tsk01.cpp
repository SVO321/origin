#include <iostream>
#include "string"
#include <windows.h>

class Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure() {}
    Figure(int sides_count) {
        this->sides_count = sides_count;
    }
    void GetSidesCount()
    {
        name = GetName();
        std::cout << name << " " << sides_count << std::endl;
    }
    std::string GetName()
    {
        this->name = "Фигура:";
        return name;
    }
};

class Triangle : public Figure
{
public:
    Triangle(int sides_count) : Figure(sides_count)
    {
    }
    void GetSidesCount()
    {
        name = GetName();
        std::cout << name << " " << sides_count << std::endl;
    }
    std::string GetName()
    {
        this->name = "Треугольник:";
        return name;
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle(int sides_count) : Figure(sides_count) {
    }
    void GetSidesCount()
    {
        name = GetName();
        std::cout << name << " " << sides_count << std::endl;
    }
    std::string GetName()
    {
        this->name = "Четырехугольник:";
        return name;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    std::cout << "Количество сторон: " << std::endl;
    Figure Figure(0);
    Figure.GetSidesCount();
    Triangle Triangle(3);
    Triangle.GetSidesCount();
    Quadrangle Quadrangle(4);
    Quadrangle.GetSidesCount();
    Sleep(10000);
    return 0;
}