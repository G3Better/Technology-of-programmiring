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
    };

#endif // DYNAMIC_ARRAY_H
