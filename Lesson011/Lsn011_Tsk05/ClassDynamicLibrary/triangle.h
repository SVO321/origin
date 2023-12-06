#pragma once
#ifdef CLASSDYNAMICLIBRARY_EXPORTS
#define CLASSLIBRARY_API __declspec(dllexport)
#else
#define CLASSLIBRARY_API __declspec(dllimport)
#endif
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
    CLASSLIBRARY_API Triangle(int in_side_length_a, int in_side_length_b, int in_side_length_c,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C);
    CLASSLIBRARY_API Triangle();
    void PrintInfo() override;
    CLASSLIBRARY_API std::string GetName();
};