//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "rectanglef.h"

class Square : public RectangleF
{
public:
    Square(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
           int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D);
    Square();
    void PrintInfo() override;
    std::string GetName();
};