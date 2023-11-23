//
// Created by vasil on 11/21/2023.
//
#include "figure.h"
#include "triangle.h"

void Triangle::PrintInfo()
{
name = GetName();
std::cout << name << std::endl;
std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
}
std::string Triangle::GetName()
{
    return name = "Треугольник";
}
void Triangle::Print()
{
    std::cout << name << " " << "(стороны " << side_length_a << "," << side_length_b << "," << side_length_c << ";" << " " << "углы"
    << angle_value_A << ", " << angle_value_B << ", " << angle_value_C << ")" << "создан" << std::endl;
}

