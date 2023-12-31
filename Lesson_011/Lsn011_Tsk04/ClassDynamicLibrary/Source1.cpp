﻿#include "equilateraltriangle.h"

void EquilateralTriangle::PrintInfo() {
    name = GetName();
    std::cout << name << std::endl;
    std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
    std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
    std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
    std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
}
std::string EquilateralTriangle::GetName()
{
    return name = "Равносторонний треугольник";
}