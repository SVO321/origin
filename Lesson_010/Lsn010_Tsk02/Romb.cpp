//
// Created by vasil on 11/21/2023.
//
#include "romb.h"

Romb::Romb()
    {
        this->side_length_a = 30;
        this->side_length_c = 30;
    }
    Romb::Romb(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
               int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
               : Parallelogram(in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
                               in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
                {
                    name = "Ромб";
                }
void Romb::PrintInfo() {
name = GetName();
std::cout << name << std::endl;
std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
}
std::string Romb::GetName()
{
    return name = "Ромб";
}