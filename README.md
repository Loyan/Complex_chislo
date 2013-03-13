клас, який реалізує операції з комплексними числами
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
