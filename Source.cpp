#include"Node.h"
#include "GAI.h"
int main() 
{
    setlocale(LC_ALL, "Rus");
    GAI car;

    car.add("в777ор 77", "Оскорбление сотрудника при исполнении.");
    car.add("с346рв 40", "Проезд на красный свет");
    car.add("а890аа 144", "Неоплаченная парковка");

    cout << "Все нарушения:" << '\n';
    car.printAll();

    
    return 0;
}
