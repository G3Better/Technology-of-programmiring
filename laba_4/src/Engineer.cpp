#include "Engineer.h"
#include <iostream>

Engineer::Engineer(const std::string& name) : Employee(name) {}

void Engineer::display() const {
    std::cout << "Инженер: " << name << std::endl;
}
