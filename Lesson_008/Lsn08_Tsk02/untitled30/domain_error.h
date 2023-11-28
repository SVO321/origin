//
// Created by Vasily Soldatov on 11/23/2023.
//
#pragma once
#include <iostream>
#include "string"

class Domain_Error: public std::exception
{
private:
    std::string message;    // сообщение об ошибке
public:
    explicit Domain_Error(const std::string& message);
    const char* what() const noexcept override;
};