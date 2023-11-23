//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
                  int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
            : Quadrangle (in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
                          in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
    {
        name = "ֿאנאככוכמדנאלל";
    }
//    Parallelogram()
//    {
//        this->side_length_a = 20;
//        this->side_length_b = 30;
//        this->side_length_c = 20;
//        this->side_length_d = 30;
//        this->angle_value_A = 30;
//        this->angle_value_B = 40;
//        this->angle_value_C = 30;
//        this->angle_value_D = 40;
//    }
    void PrintInfo() override;
    std::string GetName();
};