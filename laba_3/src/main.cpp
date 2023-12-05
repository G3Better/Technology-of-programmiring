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

        // Вывод суммы элементов до минимального элемента в массиве
        std::cout << "Сумма элементов до минимального: " << floatArray.sumBeforeMin() << std::endl;

          DynamicArray<int> arr1(5); // Создание массива arr1 размером 5
          DynamicArray<int> arr2(3); // Создание массива arr2 размером 3

          arr1.set(0,0);
          arr1.set(1,1);
          arr1.set(2,2);
          arr1.set(3,3);
          arr1.set(4,4);
          arr2.set(0,-3);
          arr2.set(1,-6);
          arr2.set(2,-9);
          std::cout << "Массив чисел номер 1: ";
          arr1.print();
          std::cout << "Массив чисел номер 2: ";
          arr2.print();
          DynamicArray<int> arr3 = arr1 + arr2; // Объединение двух массивов
          std::cout << "Объеденённый массив: ";
          arr3.print();
          if (arr1 != arr2) { // Проверка на неравенство массивов
              std::cout << "Массивы не равны" << std::endl;
          }
          arr1 = arr3; // Присваивание массиву arr1 значений массива arr3
          std::cout << "Массив чисел номер 1, после присваивания значений из массива arr3: ";
          arr1.print();
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
