//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include <utility>
#include "string"
#include <windows.h>
#include "triangle.h"
#include "domain_error.h"

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle();
    EquilateralTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c,
                        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C,
                        std::string in_name, int in_sides_amount);
    void PrintInfo() override;
    std::string GetName() override;
    void Print() override;
};
