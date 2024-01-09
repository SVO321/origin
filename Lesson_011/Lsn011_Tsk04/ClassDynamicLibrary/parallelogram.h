#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "quadrangle.h"
#include "figure.h"

class Parallelogram : public Quadrangle
{
public:
    CLASSLIBRARY_API Parallelogram(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D);
    CLASSLIBRARY_API Parallelogram();
    CLASSLIBRARY_API void PrintInfo() override;
    CLASSLIBRARY_API std::string GetName();
};