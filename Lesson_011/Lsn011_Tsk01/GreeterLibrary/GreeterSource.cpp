#include "Greeter.h"
#include <string>
#include <iostream>
#include <windows.h>

void Greeter::Greet(std::string input_name)
{
	std::cout << "Hello, " << input_name << "!" << std::endl;
}
