#pragma once
#include <string>

#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIBRARY_API __declspec(dllimport)
#endif

class Leaver
{
private:
	std::string input_name;
public:
	__declspec(dllexport) void Leave(std::string input_name);
};
