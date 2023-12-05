#include "Administration.h"
#include <iostream>

Administration::Administration(const std::string& name) : Employee(name) {}

void Administration::display() const {
    std::cout << "Администратор: " << name << std::endl;
}
