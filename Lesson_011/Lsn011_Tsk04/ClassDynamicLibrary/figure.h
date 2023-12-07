#pragma once
#ifdef CLASSDYNAMICLIBRARY_EXPORTS
#define CLASSLIBRARY_API __declspec(dllexport)
#else
#define CLASSLIBRARY_API __declspec(dllimport)
#endif

#include <iostream>
#include "string"
#include <windows.h>

class Figure
{
protected:
    std::string sides_name = "Стороны\t";
    std::string angles_name = "Углы\t";
    std::string name;
public:
    __declspec(dllexport) virtual void PrintInfo();
};