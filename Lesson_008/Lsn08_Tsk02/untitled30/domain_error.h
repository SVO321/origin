//
// Created by Vasily Soldatov on 11/23/2023.
//
#pragma once
#include <iostream>
#include "string"
#include <windows.h>

class Domain_Error: public std::exception
{
public:
    Domain_Error(const std::string& message): message{message}
    {}
    const char* what() const noexcept override
    {
        return message.c_str();     // получаем из std::string строку const char*
    }
private:
    std::string message;    // сообщение об ошибке
};