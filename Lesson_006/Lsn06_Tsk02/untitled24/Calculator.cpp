#include <iostream>
#include "calculator.h"

Calculator::Calculator(int priv_input_value) {this->priv_input_value = priv_input_value;}
void Calculator::sum_priv_input_value() {priv_input_value++;}
void Calculator::subtraction_priv_input_value() {priv_input_value--;}
void Calculator::print_priv_input_value() {std::cout << priv_input_value << std::endl;}
