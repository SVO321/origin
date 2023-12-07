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
class IsoscelesTriangle : public Triangle
{
public:
    __declspec(dllexport) IsoscelesTriangle();
    __declspec(dllexport) IsoscelesTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C);
    __declspec(dllexport) void PrintInfo() override;
    __declspec(dllexport) std::string GetName();
};