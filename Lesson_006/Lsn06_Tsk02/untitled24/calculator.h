#pragma once

class Calculator {
private:
    int priv_input_value = 0;
public:
    Calculator(int priv_input_value) {
        this->priv_input_value = priv_input_value;}
    void sum_priv_input_value();
    void subtraction_priv_input_value();
    void print_priv_input_value();
};