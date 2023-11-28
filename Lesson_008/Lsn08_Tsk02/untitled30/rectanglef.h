//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "quadrangle.h"
#include "domain_error.h"

class RectangleF : public Quadrangle
{
public:
    RectangleF(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
               int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D,
               std::string in_name, int in_sides_amount);
    RectangleF();
    void PrintInfo() override;
    std::string GetName() override;
    void Print() override;
};
