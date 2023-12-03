//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "figure.h"

class Triangle : public Figure
{
protected:
    int side_length_a;
    int side_length_b;
    int side_length_c;
    int angle_value_A;
    int angle_value_B;
    int angle_value_C;
    std::string name;
public:
    Triangle(int in_side_length_a, int in_side_length_b, int in_side_length_c,
             int in_angle_value_A, int in_angle_value_B, int in_angle_value_C);
    Triangle();
    void PrintInfo() override;
    std::string GetName();
};