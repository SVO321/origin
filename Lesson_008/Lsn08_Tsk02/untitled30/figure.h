//
// Created by vasil on 11/21/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>

class Figure
{
protected:
    std::string sides_name = "�������\t";
    std::string angles_name = "����\t";
public:
    virtual void PrintInfo();
    virtual void Print();
};