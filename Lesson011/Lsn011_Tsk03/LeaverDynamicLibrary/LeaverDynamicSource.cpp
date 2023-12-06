#include "LeaverDynamic.h"
#include <string>
#include <iostream>
#include <windows.h>

std::string Leaver::Leave(std::string input_name)
{
	std::cout << "Goodbye, " << input_name << "!" << std::endl;
	Sleep(5000);
	return 0;
}
