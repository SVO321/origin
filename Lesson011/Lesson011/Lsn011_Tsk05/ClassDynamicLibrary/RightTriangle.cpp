﻿#include "righttriangle.h"

RightTriangle::RightTriangle() {
    this->angle_value_C = 90;
}
RightTriangle::RightTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
    int in_angle_value_B, int in_angle_value_C)
    : Triangle(in_side_length_a, in_side_length_b, in_side_length_c, in_angle_value_A,
        in_angle_value_B, in_angle_value_C)
{
    name = "Прямоугольный треугольник";
}
void RightTriangle::PrintInfo() {
    name = GetName();
    std::cout << name << std::endl;
    std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
    std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
    std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
    std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
}
std::string RightTriangle::GetName()
{
    return name = "Прямоугольный треугольник";
}