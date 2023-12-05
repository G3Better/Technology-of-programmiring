#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stdexcept>
#include <iostream>

// Шаблон класса DynamicArray для работы с одномерным динамическим массивом
template <typename T>
class DynamicArray {
private:
    T* data; // Указатель на начало массива
    size_t size; // Размер массива

public:
    // Конструктор с параметром размера массива
    explicit DynamicArray(size_t size)
    : size(size), data(new T[size]) {
        // Инициализация массива нулями для безопасности
        for (size_t i = 0; i < size; ++i) {
            data[i] = T();
        }
    }

    // Деструктор
    ~DynamicArray() {
        delete[] data; // Освобождение выделенной памяти
    }


    // Метод для установки значения элемента по индексу
    void set(size_t index, T value) {
        if (index >= size) {
            throw std::out_of_range("Индекс за пределами массива");
        }
        data[index] = value;
    }

    // Метод для получения значения элемента по индексу
    T get(size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Индекс за пределами массива");
        }
        return data[index];
    }

    // Метод для получения размера массива
    size_t getSize() const {
        return size;
    }

    // Метод для вычисления количества положительных элементов массива
    size_t countPositive() const {
        size_t count = 0;
        for (size_t i = 0; i < size; ++i) {
            if (data[i] > T()) { // Сравнение с нулём типа T
                ++count;
            }
        }
        return count;
    }

    // Метод для вычисления суммы элементов до минимального элемента в массиве
    T sumBeforeMin() const {
        if (size == 0) {
            throw std::logic_error("Массив пуст");
        }

        T min = data[0];
        size_t minIndex = 0;

        // Поиск минимального элемента и его индекса
        for (size_t i = 1; i < size; ++i) {
            if (data[i] < min) {
                min = data[i];
                minIndex = i;
            }
        }

        // Вычисление суммы элементов до минимального
        T sum = T(); // Инициализация суммы нулём типа T
        for (size_t i = 0; i < minIndex; ++i) {
            sum += data[i];
        }

        return sum;
    }

    // Метод для вывода массива на экран
        void print() const {
            std::cout << "[";
            for (size_t i = 0; i < size; ++i) {
                std::cout << data[i];
                if (i < size - 1) {
                    std::cout << ", ";
                }
            }
            std::cout << "]" << std::endl;
        }
        // Перегрузка оператора присваивания
           DynamicArray& operator=(const DynamicArray& other) {
               if (this != &other) { // Защита от самоприсваивания
                   delete[] data; // Освобождаем старую память
                   size = other.size;
                   data = new T[size]; // Выделяем новую память
                   for (size_t i = 0; i < size; ++i) {
                       data[i] = other.data[i]; // Копируем данные
                   }
               }
               return *this; // Возвращаем текущий объект
           }

           // Перегрузка оператора неравенства
           bool operator!=(const DynamicArray& other) const {
               if (size != other.size) return true; // Массивы разной длины не равны
               for (size_t i = 0; i < size; ++i) {
                   if (data[i] != other.data[i]) return true; // Если элементы не равны, массивы не равны
               }
               return false; // Все элементы равны, массивы равны
           }

           // Перегрузка оператора сложения (объединения массивов)
           DynamicArray operator+(const DynamicArray& other) const {
               DynamicArray result(size + other.size); // Создание нового массива с размером, равным сумме размеров исходных массивов
               for (size_t i = 0; i < size; ++i) {
                   result.data[i] = data[i]; // Копирование элементов из первого массива
               }
               for (size_t i = 0; i < other.size; ++i) {
                   result.data[size + i] = other.data[i]; // Копирование элементов из второго массива
               }
               return result; // Возвращение нового массива как результата объединения
           }
};

#endif // DYNAMIC_ARRAY_H
