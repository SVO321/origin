#pragma once
#include <iostream>
#include "string"
#include <windows.h>
#include "triangle.h"
#include "figure.h"

class EquilateralTriangle : public Triangle
{
public:
    CLASSLIBRARY_API EquilateralTriangle();
    CLASSLIBRARY_API EquilateralTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C);
    CLASSLIBRARY_API void PrintInfo() override;
    CLASSLIBRARY_API std::string GetName();
};