#include <iostream>
#include "string"
#include <windows.h>
#include "../GreeterLibrary/Greeter.h"

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    std::string input_name;
    std::cout << "Please type your name:";
    std::cin >> input_name;
    Greeter greet;
    greet.Greet(input_name);
}