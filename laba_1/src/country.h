#ifndef COUNTRY_H
#define COUNTRY_H

class Country {
private:
    char* name; // Название страны
    char* government_form; // Форма правления
    float area; // Площадь страны

    // Вспомогательный метод для копирования строк
    char* copyString(const char* source);

public:
    // Конструктор без параметров
    Country();

    // Конструктор с параметрами
    Country(const char* name, const char* government_form, float area);

    // Конструктор копирования
    Country(const Country& other);

    // Деструктор
    ~Country();

    // Методы для установки значений полей
    void setName(const char* name);
    void setGovernmentForm(const char* government_form);
    void setArea(float area);

    // Методы для получения значений полей
    const char* getName() const;
    const char* getGovernmentForm() const;
    float getArea() const;

    // Дополнительные методы
    void printInfo() const; // Вывод информации о стране
    bool isBigCountry() const; // Проверка, является ли страна большой по площади
};

#endif // COUNTRY_H
