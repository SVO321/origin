#include <iostream>
#include <windows.h>
#include "calculator.h"

void Calculator::sum_priv_input_value() {priv_input_value++;}
void Calculator::subtraction_priv_input_value() {priv_input_value--;}
void Calculator::print_priv_input_value() {std::cout << priv_input_value << std::endl;}
