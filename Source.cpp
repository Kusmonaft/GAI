#include"Node.h"
#include "GAI.h"
int main() 
{
    setlocale(LC_ALL, "Rus");
    GAI car;

    car.add("�777�� 77", "����������� ���������� ��� ����������.");
    car.add("�346�� 40", "������ �� ������� ����");
    car.add("�890�� 144", "������������ ��������");

    cout << "��� ���������:" << '\n';
    car.printAll();

    
    return 0;
}
