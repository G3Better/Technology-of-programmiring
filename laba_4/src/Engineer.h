#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

// Класс Engineer (Инженер), наследуется от Employee
class Engineer : public Employee {
public:
    Engineer(const std::string& name);
    void display() const override;
};

#endif // ENGINEER_H
