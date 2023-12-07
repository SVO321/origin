#include <iostream>
#include "string"
#include <windows.h>
#include "parallelogram.h"
#pragma once
#ifdef CLASSDYNAMICLIBRARY_EXPORTS
#define CLASSLIBRARY_API __declspec(dllexport)
#else
#define CLASSLIBRARY_API __declspec(dllimport)
#endif
class Romb : public Parallelogram
{
public:
    __declspec(dllexport) Romb(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D);
    __declspec(dllexport) Romb();
    __declspec(dllexport) void PrintInfo() override;
    __declspec(dllexport) std::string GetName();
};