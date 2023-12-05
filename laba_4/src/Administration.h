#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include "Employee.h"

// Класс Administration (Администрация), наследуется от Employee
class Administration : public Employee {
public:
    Administration(const std::string& name);
    void display() const override;
};

#endif // ADMINISTRATION_H
