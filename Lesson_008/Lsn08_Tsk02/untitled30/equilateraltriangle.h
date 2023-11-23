//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "triangle.h"

class EquilateralTriangle : public Triangle
{
public:
//    EquilateralTriangle()
//    {
//        this->side_length_a = 30;
//        this->side_length_b = 30;
//        this->angle_value_A = 60;
//        this->angle_value_C = 60;
//
//    }
public:
    EquilateralTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
                        int in_angle_value_B, int in_angle_value_C)
            : Triangle(in_side_length_a, in_side_length_b, in_side_length_c, in_angle_value_A,
                       in_angle_value_B, in_angle_value_C)
    {
        name = "Равносторонний треугольник";
    }
    void PrintInfo() override;
    std::string GetName();
};
