#include <iostream>
using namespace std;
class Complex;

class Calculator
{
public:
    int a;
    void sum(Complex, Complex);
    friend void add(Complex, Calculator);
};
class Complex
{

    int real;
    int img;

public:
    friend void Calculator::sum(Complex, Complex);
    friend void add(Complex, Calculator);

    void setData(int a, int b)
    {
        real = a;
        img = b;
    }
    void getData()
    {
        cout << real << '+' << img << 'i' << endl;
    }
};
void Calculator::sum(Complex o1, Complex o2)
{
    cout << o1.real + o2.real << '+' << o1.img + o2.img << 'i' << endl;
}
void add(Complex ob1, Calculator ob2)
{
    cout << ob1.real + ob2.a;
}

int main()
{
    Complex obj1, obj2, obj3;
    Calculator cal;
    cal.a = 7;
    obj1.setData(3, 6);
    obj2.setData(7, 9);

    obj1.getData();
    obj2.getData();

    cal.sum(obj1, obj2);
    add(obj1, cal);

    return 0;
}