#include <iostream>
#include "string"
#include <windows.h>
#include "triangle.h"

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle();
    EquilateralTriangle(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_angle_value_A,
        int in_angle_value_B, int in_angle_value_C);
    void PrintInfo() override;
    std::string GetName();
};