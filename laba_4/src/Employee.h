#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

// Базовый класс Employee (Сотрудник)
class Employee {
public:
    std::string name; // Имя сотрудника
    static Employee* head; // Статический указатель на начало списка
    Employee* next; // Указатель на следующий элемент списка

    // Конструктор класса Employee
    Employee(const std::string& name);

    // Виртуальный деструктор
    virtual ~Employee();

    // Виртуальный метод для вывода информации о сотруднике
    virtual void display() const;

    // Статический метод для просмотра списка сотрудников
    static void listEmployees();
};

#endif // EMPLOYEE_H
