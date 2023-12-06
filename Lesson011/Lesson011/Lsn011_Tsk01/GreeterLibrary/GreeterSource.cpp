#include "Greeter.h"
#include <string>
#include <iostream>
#include <windows.h>

std::string Greeter::Greet(std::string input_name)
{
	std::cout << "Hello, " << input_name << "!" << std::endl;
	Sleep(10000);
	return 0;
}
