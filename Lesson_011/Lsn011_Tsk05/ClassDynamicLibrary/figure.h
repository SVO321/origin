#include <iostream>
#include "string"
#include <windows.h>

class Figure
{
protected:
    std::string sides_name = "???????\t";
    std::string angles_name = "????\t";
    std::string name;
public:
    virtual void PrintInfo();
};