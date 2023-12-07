#include <iostream>
#include "string"
#include <windows.h>
#include "triangle.h"
#pragma once
#ifdef CLASSDYNAMICLIBRARY_EXPORTS
#define CLASSLIBRARY_API __declspec(dllexport)
#else
#define CLASSLIBRARY_API __declspec(dllimport)
#endif
__declspec(dllexport) class EquilateralTriangle : public Triangle
{
public:
    __declspec(dllexport) EquilateralTriangle();
    __declspec(dllexport) EquilateralTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C);
    __declspec(dllexport) void PrintInfo() override;
    __declspec(dllexport) std::string GetName();
};