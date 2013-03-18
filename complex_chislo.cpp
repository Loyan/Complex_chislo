// class source
#include <iostream>
#include <cmath>
using namespace std;
 
class Complex
{
protected:
    double re;// дійсна частина комплексного числа
    double im;// уявна частина комплексного числа
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
    cout << re << showpos << im << "i" << noshowpos; // вивід дійсної та уявної частини показуючи + перед невід*ємними числами
}
Complex::Complex()// реалізація конструктора без параметрів
{
    re = 0;// обнуляємо початкові значення дійсної та уявної частин
    im = 0;
}
 
Complex::Complex(double re, double im)// реалізація конструктора з параметрами
{
    this->re = re;
    this->im = im;
}
double Complex::module()// реалізація знаходження модуля від комплексного числа
{
    return sqrt(re*re + im*im );
}
 
Complex Complex::operator+(Complex num)// реалізація знаходження суми двох комплексних чисел
{
    Complex newNum(re + num.re, im + num.im);
    return newNum;
}
Complex Complex::operator-(Complex num)// реалізація знаходження різницідвох комплексних чисел
{    Complex newNum(re - num.re, im - num.imy);
    return newNum;
}
 
Complex Complex::operator*(Complex num)// реалізація знаходження добутку двох комплексних чисел
{
    Complex newNum(re * num.re - im * num.im, im * num.re + re * num.im);
    return newNum;
}
 
Complex Complex::operator/(Complex num)// реалізація знаходження частки двох комплексних чисел
{
    Complex newNum((re * num.re + im * num.im) / (num.im * num.im + num.re * num.re), (im * num.re - re * num.im) / (num.re * num.re + num.im * num.im));
    return newNum;
}
 
