#include <iostream>
#include "string"
#include <windows.h>

class Figure {
protected:
    int sides_count;
    std::string name = "Фигура:";
public:
    Figure() {}
    Figure(int sides_count) {
        this->sides_count = 0;
        std::cout << name << " " << sides_count << std::endl;
    }
    void GetSidesCount(int sides_count) {}
};

class Triangle : public Figure
{
public:
    Triangle(int sides_count) {
        this->sides_count = sides_count;
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
    Quadrangle(int sides_count) {
        this->sides_count = sides_count;
    }
    void GetSidesCount()
    {
        name = GetName();
        std::cout << name << " " << sides_count << std::endl;
    }
    std::string GetName()
    {
        this->name = "Квадрат:";
        return name;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    std::cout << "Количество сторон: " << std::endl;
    Figure(0);
    Triangle Triangle(3);
    Triangle.GetSidesCount();
    Quadrangle Quadrangle(4);
    Quadrangle.GetSidesCount();
    Sleep(10000);
    return 0;
}