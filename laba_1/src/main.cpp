#include "country.h"
#include <iostream>

int main() {
    // Создание объекта в статической памяти
    Country russia("Россия", "Федеративная республика", 17098242.0f);
    russia.printInfo();

    // Создание объекта в динамической памяти
    Country* usa = new Country("США", "Федеральная республика", 9833517.0f);
    usa->printInfo();

    // Проверка через указатель на большую страну
    if (usa->isBigCountry()) {
    	std::cout << usa->getName() << " - большая страна." << std::endl;
    }

    // Удаление объекта из динамической памяти
    delete usa;

    // Создание массива объектов в динамической памяти
    int countriesCount = 2;
    Country* countries = new Country[countriesCount];

    // Инициализация массива значений
    countries[0].setName("Китай");
    countries[0].setGovernmentForm("Народная республика");
    countries[0].setArea(9596961.0f);

    countries[1].setName("Индия");
    countries[1].setGovernmentForm("Федеративная республика");
    countries[1].setArea(3287263.0f);

    for (int i = 0; i < countriesCount; ++i) {
        countries[i].printInfo();
    }

    // Удаление массива объектов из динамической памяти
    delete[] countries;

    return 0;
}
