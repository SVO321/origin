#include <iostream>
#include "string"
#include <windows.h>
#include "rectanglef.h"
#include "figure.h"

class Square : public RectangleF
{
public:
    CLASSLIBRARY_API Square(int in_side_length_a, int in_side_length_b, int in_side_length_c, int in_side_length_d,
        int in_angle_value_A, int in_angle_value_B, int in_angle_value_C, int in_angle_value_D);
    CLASSLIBRARY_API Square();
    CLASSLIBRARY_API void PrintInfo() override;
    CLASSLIBRARY_API std::string GetName();
};