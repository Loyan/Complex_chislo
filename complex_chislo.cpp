// class source
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
 
class Complex
{
protected:
    double re;// дійсна частина комплексного числа
    double b;
    double d;
    double c;
    double im;// уявна частина комплексного числа
public:
    double module(); //розрахунок модуля комплексного числа
    double kyt ();
    double trugonometriya(); // розрахунок кута комплексного числа
    double get_module();
    double set_module(double*new_module);
    double get_kyt();
    double set_kyt(double*new_kyt);
    Complex(); //конструктор без параметрів
    Complex(double re, double im); // конструктор з параметрами
    void showComplex();  //вивід комплексного числа
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
double Complex::kyt()
{
       if (im>=0&re>=0)
       return atan(im/re);
       if (im>=0&re<=0)
       return (-atan(im/re));
       if (im<=0&re<=0)
       return atan(im/re);
       if (im<=0&re>=0)
       return (- atan(im/re));       
}
double Complex::trugonometriya()// Переведення в тригонометричну форму
{
b=sqrt(re*re + im*im );
d = cos(atan(im/re));
c = sin(atan(im/re));
       return b*(d+c);        
}
Complex Complex::operator+(Complex num)// перегрузка +
{
    Complex newNum(re + num.re, im + num.im);
    return newNum;
}
Complex Complex::operator-(Complex num)// перегрузка -
{    Complex newNum(re - num.re, im - num.im);
    return newNum;
} 
Complex Complex::operator*(Complex num)// перегрузка *
{
    Complex newNum(re * num.re - im * num.im, im * num.re + re * num.im);
    return newNum;
}
Complex Complex::operator/(Complex num)// перегрузка /
{
    Complex newNum((re * num.re + im * num.im) / (num.im * num.im + num.re * num.re), (im * num.re - re * num.im) / (num.re * num.re + num.im * num.im));
    return newNum;
}
 int main()
{        
    Complex z1(-5, 4);//Задаємо початкові значення першого комплексного числа
    Complex z2(1, -8); //Задаємо початкові значення другого комплексного числа
    cout << "Mu maemo dva kompleksnuh chisla: " << '\n'; 
    cout << "z1="; 
    z1.showComplex(); // виводимо перше комплексне число на екран
    cout << "   ";
    cout << "z2="; 
    z2.showComplex(); // виводимо друге комплексне число на екран
    cout << '\n';
    cout << "Modul z1=" << z1.module() << '\n'; // виведення модуля першого комрлексного числа
    cout << "Modul z2=" << z2.module() << '\n'; // виведення модуля другого комрлексного числа
    cout<<"Kyt z1 = "<<z1.kyt()<<'\n';
    cout<<"Kyt z2 = "<<z2.kyt()<<'\n';
    cout<<"Trugonometruchna forma z1 ="<<z1.trugonometriya()<<'\n';// тригонометрична форма
    cout<<"Trugonometruchna forma z2 ="<<z2.trugonometriya()<<'\n';
    cout << "z1 + z2 = ";
    (z1 + z2).showComplex(); // Виведення результатів реалізації процесу додавання
    cout << '\n';
    cout << "z1 - z2 = ";
    (z1 - z2).showComplex(); // Виведення результатів реалізації процесу віднімання
    cout << '\n';
    cout << "z1 * z2 = "; 
    (z1 * z2).showComplex(); // Виведення результатів реалізації процесу множення
    cout << '\n';
    cout << "z1 / z2 = "; 
    (z1 / z2).showComplex(); // Виведення результатів реалізації процесу ділення
    cout << '\n';
    system("PAUSE");
        return 0;
}

