#include "figure.h"
#include "triangle.h"

Triangle::Triangle(int in_side_length_a, int in_side_length_b, int in_side_length_c,
    int in_angle_value_A, int in_angle_value_B, int in_angle_value_C)
{
    side_length_a = in_side_length_a, side_length_b = in_side_length_b, side_length_c = in_side_length_c,
        angle_value_A = in_angle_value_A, angle_value_B = in_angle_value_B, angle_value_C = in_angle_value_C;
    name = "Треугольник";
}
Triangle::Triangle()
{
    this->side_length_a = 10;
    this->side_length_b = 20;
    this->side_length_c = 30;
    this->angle_value_A = 50;
    this->angle_value_B = 60;
    this->angle_value_C = 70;
}
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