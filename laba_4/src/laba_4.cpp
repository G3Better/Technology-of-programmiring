#include "Worker.h"
#include "HR.h"
#include "Engineer.h"
#include "Administration.h"
#include <iostream>
//Демонстрирующая программа
int main() {
    Worker w("Иван");
    HR hr("Ольга");
    Engineer e("Алексей");
    Administration a("Марина");

    std::cout << "Список сотрудников:" << std::endl;
    Employee::listEmployees();

    return 0;
}
