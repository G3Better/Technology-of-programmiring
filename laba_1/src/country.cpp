#include "country.h"
#include <iostream>
#include <cstring>

// Вспомогательный метод для копирования строк
char* Country::copyString(const char* source) {
    if (source == nullptr) {
        return nullptr;
    }
    char* dest = new char[strlen(source) + 1];
    strcpy(dest, source);
    return dest;
}

// Конструктор без параметров
Country::Country()
: name(nullptr), government_form(nullptr), area(0.0f) {
    std::cout << "Вызван конструктор по умолчанию." << std::endl;
}

// Конструктор с параметрами
Country::Country(const char* name, const char* government_form, float area)
: name(copyString(name)), government_form(copyString(government_form)), area(area) {
    std::cout << "Вызван конструктор с параметрами." << std::endl;
    std::cout << "Название: " << name << std::endl;
    std::cout << "форма правления: " << government_form << std::endl;
    std::cout << "Площадь: " << area << std::endl;
    std::cout << " " << std::endl;
}

// Конструктор копирования
Country::Country(const Country& other)
: name(copyString(other.name)), government_form(copyString(other.government_form)), area(other.area) {
    std::cout << "Вызван конструктор копирования." << std::endl;
    std::cout << "Название: " << name << std::endl;
    std::cout << "форма правления: " << government_form << std::endl;
    std::cout << "Площадь: " << area << std::endl;
    std::cout << " " << std::endl;
}

// Деструктор
Country::~Country() {
    std::cout << "Вызван деструктор для объекта " << (name ? name : "[без названия]") << "." << std::endl;
    delete[] name;
    delete[] government_form;
}

// Методы для установки значений полей
void Country::setName(const char* name) {
    delete[] this->name;
    this->name = copyString(name);
}

void Country::setGovernmentForm(const char* government_form) {
    delete[] this->government_form;
    this->government_form = copyString(government_form);
}

void Country::setArea(float area) {
    this->area = area;
}

// Методы для получения значений полей
const char* Country::getName() const { return name; }
const char* Country::getGovernmentForm() const { return government_form; }
float Country::getArea() const { return area; }

// Дополнительные методы
void Country::printInfo() const {
    std::cout << "Страна: " << (name ? name : "[без названия]") << ", Форма правления: " << (government_form ? government_form : "[не указана]") << ", Площадь: " << area << " кв.км." << std::endl;
}

bool Country::isBigCountry() const {
    return area > 1000000; // Примерный критерий большой страны по площади
}
