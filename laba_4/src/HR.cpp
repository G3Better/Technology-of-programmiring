#include "HR.h"
#include <iostream>

HR::HR(const std::string& name) : Employee(name) {}

void HR::display() const {
    std::cout << "Менеджер: " << name << std::endl;
}
