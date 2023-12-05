#ifndef HR_H
#define HR_H

#include "Employee.h"

// Класс HR (Кадры), наследуется от Employee
class HR : public Employee {
public:
    HR(const std::string& name);
    void display() const override;
};

#endif // HR_H
