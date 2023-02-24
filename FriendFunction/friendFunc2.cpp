#include <iostream>
using namespace std;
class Your;
class My
{
private:
    int a = 1;

protected:
    int b = 2;

public:
    int c = 3;

    friend Your;
    void display()
    {
        cout << a << " " << b << " " << c << " " << endl;
    }
};
class Your
{
    My m;

public:
    void fun()
    {
        m.a = 10;
        m.b = 56;
        m.c = 90;
    }
};
int main()
{
    My m;
    m.display();

    Your y;
    y.fun();

    m.display();
    return 0;
}