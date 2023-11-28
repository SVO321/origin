//
// Created by vasil on 11/21/2023.
//
#include "righttriangle.h"

RightTriangle::RightTriangle() {
        this->angle_value_C = 90;
}
RightTriangle::RightTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c,
                             int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, std::string in_name, int in_sides_amount)
{
    if (in_sides_amount != 3){
        throw Domain_Error("количество сторон не равно 3");
    }
    if (in_angle_value_C != 90) {
        throw Domain_Error("угол C не равен 90");
    }
    side_length_a = in_side_length_a, side_length_b = in_side_length_b, side_length_c = in_side_length_c,
    angle_value_A = in_angle_value_A, angle_value_B = in_angle_value_B, angle_value_C = in_angle_value_C,
    name = in_name, sides_amount = in_sides_amount;
}
void RightTriangle::PrintInfo() {
name = GetName();
std::cout << name << std::endl;
std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
std::cout << side_length_b << " " << "c=" << side_length_c << std::endl;
std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
std::cout << angle_value_B << " " << "C=" << angle_value_C << "\n" << std::endl;
}

void RightTriangle::Print()
{
    name = GetName();
    std::cout << name << " " << "(стороны " << side_length_a << ", " << side_length_b << ", " << side_length_c << ";" << " "
    << "углы " << angle_value_A << ", " << angle_value_B << ", " << angle_value_C << ") " << "создан" << std::endl;
}
std::string RightTriangle::GetName()
{
    return name = "Прямоугольный треугольник";
}

