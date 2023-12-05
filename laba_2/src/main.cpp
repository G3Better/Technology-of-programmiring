#include "dynamic_array.h"
int main() {
    try {
        // Создание экземпляра шаблона класса для массива целых чисел
        DynamicArray<int> intArray(5);
        intArray.set(0, -1);
        intArray.set(1, 3);
        intArray.set(2, 2);
        intArray.set(3, -5);
        intArray.set(4, 4);

        // Вывод массива на экран
        std::cout << "Массив целых чисел: ";
        intArray.print();

        // Вывод количества положительных элементов в массиве
        std::cout << "Количество положительных элементов: " << intArray.countPositive() << std::endl;

        // Вывод суммы элементов до минимального элемента в массиве
        std::cout << "Сумма элементов до минимального: " << intArray.sumBeforeMin() << std::endl;

        // Создание экземпляра шаблона класса для массива чисел с плавающей точкой
        DynamicArray<float> floatArray(3);
        floatArray.set(0, -1.5f);
        floatArray.set(1, 3.2f);
        floatArray.set(2, -8.1f);
        // Вывод массива на экран
        std::cout << "Массив чисел с плавающей точкой: ";
        floatArray.print();

        // Вывод количества положительных элементов в массиве
        std::cout << "Количество положительных элементов: " << floatArray.countPositive() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
