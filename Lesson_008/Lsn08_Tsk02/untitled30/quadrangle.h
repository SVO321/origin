//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "figure.h"

class Quadrangle : public Figure
{
protected:
    int side_length_a;
    int side_length_b;
    int side_length_c;
    int side_length_d;
    int angle_value_A;
    int angle_value_B;
    int angle_value_C;
    int angle_value_D;
    std::string name;
public:
    Quadrangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
               int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
            : side_length_a(in_side_length_a),
              side_length_b(in_side_length_b),
              side_length_c(in_side_length_c),
              side_length_d(in_side_length_d),
              angle_value_A(in_angle_value_A),
              angle_value_B(in_angle_value_B),
              angle_value_C(in_angle_value_C),
              angle_value_D(in_angle_value_D)
    {
        name = "Четырехугольник";
    }
//    Quadrangle()
//    {
//        this->side_length_a = 10;
//        this->side_length_b = 20;
//        this->side_length_c = 30;
//        this->side_length_d = 40;
//        this->angle_value_A = 50;
//        this->angle_value_B = 60;
//        this->angle_value_C = 70;
//        this->angle_value_D = 80;
//    }
    void PrintInfo() override;
    std::string GetName();
};
