//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "figure.h"
#include "domain_error.h"

class Triangle : public Figure
{
protected:
    int side_length_a;
    int side_length_b;
    int side_length_c;
    int angle_value_A;
    int angle_value_B;
    int angle_value_C;
    int sides_amount;
    std::string name;
public:
    Triangle(int in_side_length_a, int in_side_length_b, int in_side_length_c,
             int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, std::string in_name, int in_sides_amount)
    {
        if ((in_sides_amount != 3) || (angle_value_A + angle_value_B + angle_value_C) != 180)
            throw Domain_Error("количество сторон не равно 3 или сумма углов не равна 180");
        side_length_a = in_side_length_a, side_length_b = in_side_length_b, side_length_c = in_side_length_c,
        angle_value_A = in_angle_value_A, angle_value_B = in_angle_value_B, angle_value_C = in_angle_value_C,
        name = in_name, sides_amount = in_sides_amount;
    }
//    Triangle()
//    {
//        this->side_length_a = 10;
//        this->side_length_b = 20;
//        this->side_length_c = 30;
//        this->angle_value_A = 50;
//        this->angle_value_B = 60;
//        this->angle_value_C = 70;
//    }
    void PrintInfo() override;
    std::string GetName();
    void Print() override;
};