#include <iostream>
#include <Windows.h>
using namespace std;

const double PI = 3.14159;

double areaOfCircle(double radius) 
{
    return PI * radius * radius;
}//здеся функция для вычисления площади круга

double areaOfRing(double outerRadius, double innerRadius) 
{
    return PI * (areaOfCircle(outerRadius) - areaOfCircle(innerRadius));
}//здеся функция для вычисления площади колечка

int main() 
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");

    double outerRadius, innerRadius;
    cout << "Введите пажавуста внешний радиус колечка: ";
    cin >> outerRadius;
    cout << "Введите пажавуста внутренний радиус колечка: ";
    cin >> innerRadius;

    if (outerRadius < innerRadius) 
    {
        cout << "Упс...ошибочка вышла! Такого быть не может :(" << endl;
    }
    else 
    {
        double ringArea = areaOfRing(outerRadius, innerRadius);
        cout << "Площадь кольца: " << ringArea << endl;
    }

    return 0;
}

