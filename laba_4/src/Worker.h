#ifndef WORKER_H
#define WORKER_H

#include "Employee.h"

// Класс Worker (Рабочий), наследуется от Employee
class Worker : public Employee {
public:
    Worker(const std::string& name);
    void display() const override;
};

#endif // WORKER_H
