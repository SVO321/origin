//
// Created by vasil on 11/21/2023.
//
#include "parallelogram.h"

Parallelogram::Parallelogram(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
                             int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D,
                             std::string in_name, int in_sides_amount) {
    if ((in_side_length_a == in_side_length_c) & (in_side_length_b == in_side_length_d)) {
        throw Domain_Error("������� a, c � b, d ������� ������� ����� �����");
    }
    if ((in_angle_value_A == in_angle_value_C) & (in_angle_value_B == in_angle_value_D)) {
        throw Domain_Error("���� ������� ������� ����� �����");
    }
    side_length_a = in_side_length_a, side_length_b = in_side_length_b, side_length_c = in_side_length_c, side_length_d = in_side_length_d,
    angle_value_A = in_angle_value_A, angle_value_B = in_angle_value_B, angle_value_C = in_angle_value_C, angle_value_D = in_angle_value_D,
    name = in_name, sides_amount = in_sides_amount;
}
    Parallelogram::Parallelogram()
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

void Parallelogram::PrintInfo() {
name = GetName();
std::cout << name << std::endl;
std::cout << sides_name << ": " << "a=" << side_length_a << " " << "b=";
std::cout << side_length_b << " " << "c=" << side_length_c << " " << "d=" << side_length_d << std::endl;
std::cout << angles_name << ": " << "A=" << angle_value_A << " " << "B=";
std::cout << angle_value_B << " " << "C=" << angle_value_C << " " << "D=" << angle_value_D << "\n" << std::endl;
}
std::string Parallelogram::GetName()
{
    return name = "��������������";
}
void Parallelogram::Print() {
    name = GetName();
    std::cout << name << " " << "(������� " << side_length_a << ", " << side_length_b << ", " << side_length_c << ", " << side_length_d << ";" << " "
              << "���� " << angle_value_A << ", " << angle_value_B << ", " << angle_value_C << ", " << angle_value_D << ") " << "������" << std::endl;
}
