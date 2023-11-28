//
// Created by Vasily Soldatov on 11/23/2023.
//
#include "domain_error.h"

Domain_Error::Domain_Error(const std::string &message) : message{message}
{}

const char* Domain_Error::what() const noexcept
{
return message.c_str();     // получаем из std::string строку const char*
}
