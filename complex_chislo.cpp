// class source
#include <iostream>
#include <cmath>
using namespace std;
 
class Complex
{
protected:
    double x;// дійсна частина комплексного числа
    double y;// уявна частина комплексного числа
public:
    Complex(); //конструктор без параметрів
    Complex(double x, double y); // конструктор з параметрами
    void showComplex();  //вивід комплексного числа
    double module(); //розрахунок модуля комплексного числа
    Complex operator+(Complex num);  // операції: додавання   
    Complex operator-(Complex num); //віднімання
    Complex operator*(Complex num); //множення
    Complex operator/(Complex num); //ділення
};
void Complex::showComplex()
{
    cout << x << showpos << y << "i" << noshowpos; // вивід дійсної та уявної частини показуючи + перед невід*ємними числами
}
Complex::Complex()// реалізація конструктора без параметрів
{
    x = 0;// обнуляємо початкові значення дійсної та уявної частин
    y = 0;
}
 
Complex::Complex(double x, double y)// реалізація конструктора з параметрами
{
    this->x = x;
    this->y = y;
}
double Complex::module()// реалізація знаходження модуля від комплексного числа
{
    return sqrt(x*x + y*y );
}
 
Complex Complex::operator+(Complex num)// реалізація знаходження суми двох комплексних чисел
{
    Complex newNum(x + num.x, y + num.y);
    return newNum;
}
Complex Complex::operator-(Complex num)// реалізація знаходження різницідвох комплексних чисел
{    Complex newNum(x - num.x, y - num.y);
    return newNum;
}
 
Complex Complex::operator*(Complex num)// реалізація знаходження добутку двох комплексних чисел
{
    Complex newNum(x * num.x - y * num.y, y * num.x + x * num.y);
    return newNum;
}
 
Complex Complex::operator/(Complex num)// реалізація знаходження частки двох комплексних чисел
{
    Complex newNum((x * num.x + y * num.y) / (num.x * num.x + num.y * num.y), (y * num.x - x * num.y) / (num.x * num.x + num.y * num.y));
    return newNum;
}
 
