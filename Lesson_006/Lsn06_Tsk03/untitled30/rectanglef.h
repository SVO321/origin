//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "quadrangle.h"

class RectangleF : public Quadrangle
{
public:
    RectangleF(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
               int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
            : Quadrangle (in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
                          in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
    {
        name = "Прямоугольник";
    }
    RectangleF()
    {
        this->side_length_c = 10;
        this->side_length_d = 20;
        this->angle_value_A = 90;
        this->angle_value_B = 90;
        this->angle_value_C = 90;
        this->angle_value_D = 90;
    }
    void PrintInfo() override;
    std::string GetName();
};
