//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "figure.h"
#include "domain_error.h"

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
    int sides_amount;
public:
    Quadrangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
               int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D,
               std::string in_name, int in_sides_amount);

    Quadrangle();
    void PrintInfo() override;
    virtual std::string GetName();
    void Print() override;
};
