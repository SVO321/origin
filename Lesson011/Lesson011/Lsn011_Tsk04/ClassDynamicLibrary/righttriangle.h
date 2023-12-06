#pragma once
#ifdef CLASSDYNAMICLIBRARY_EXPORTS
#define CLASSLIBRARY_API __declspec(dllexport)
#else
#define CLASSLIBRARY_API __declspec(dllimport)
#endif
#include <iostream>
#include "string"
#include <windows.h>
#include "triangle.h"

class RightTriangle : public Triangle
{
public:
    CLASSLIBRARY_API RightTriangle();
    CLASSLIBRARY_API RightTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C);
    void PrintInfo() override;
    CLASSLIBRARY_API std::string GetName();
};