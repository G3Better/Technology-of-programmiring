#include "Employee.h"
#include <iostream>

// Инициализация статической переменной
Employee* Employee::head = nullptr;

// Конструктор класса Employee
Employee::Employee(const std::string& name) : name(name), next(nullptr) {
    // Добавляем сотрудника в начало списка
    next = head;
    head = this;
}

// Виртуальный деструктор
Employee::~Employee() {}

// Виртуальный метод для вывода информации о сотруднике
void Employee::display() const {
    std::cout << "Сотрудник: " << name << std::endl;
}

// Статический метод для просмотра списка сотрудников
void Employee::listEmployees() {
    Employee* current = head;
    while (current != nullptr) {
        current->display();
        current = current->next;
    }
}
