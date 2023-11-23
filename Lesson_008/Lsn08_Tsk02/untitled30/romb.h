//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "parallelogram.h"

class Romb : public Parallelogram
{
public:
    Romb(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
         int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D)
            : Parallelogram(in_side_length_a, in_side_length_b, in_side_length_c, in_side_length_d,
                            in_angle_value_A, in_angle_value_B, in_angle_value_C, in_angle_value_D)
    {
        name = "Ромб";
    }
//    Romb()
//    {
//        this->side_length_a = 30;
//        this->side_length_c = 30;
//    }
    void PrintInfo() override;
    std::string GetName();
};