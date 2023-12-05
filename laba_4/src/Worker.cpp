#include "Worker.h"
#include <iostream>

Worker::Worker(const std::string& name) : Employee(name) {}

void Worker::display() const {
    std::cout << "Рабочий: " << name << std::endl;
}
