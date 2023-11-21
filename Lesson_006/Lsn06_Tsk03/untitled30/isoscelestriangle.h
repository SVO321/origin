//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "triangle.h"

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle()
    {
        this->side_length_c = 10;
        this->angle_value_C = 50;
    }
public:
    IsoscelesTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
                      int in_angle_value_B, int in_angle_value_C)
            : Triangle(in_side_length_a, in_side_length_b, in_side_length_c, in_angle_value_A,
                       in_angle_value_B, in_angle_value_C)
    {
        name = "Равнобедренный треугольник";
    }
    void PrintInfo() override;
    std::string GetName();
};