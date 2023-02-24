#include <iostream>
using namespace std;

inline bool isEven(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}
float interest(int money, float factor = 1.04)
{
    return money * factor;
}
float volume(float r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int a)
{
    return a * a * a;
}

int main()
{
    system("cls");
    // int a=36, b=5980;
    // cout<<"Enter two Numbers: " <<a+b;

    // cout<<x;
    // if(isEven(25)==true)
    // cout<<"It's even number";
    // else
    // cout<<"It's not a even number";

    // cout<<"The total interest is "<<interest(1000)<<'\n';
    // cout<<"VIP:The total interest is "<<interest(1000,1.06);
    cout << "The volume of cyllinder is " << volume(21, 6) << '\n';
    cout << "The volume of cube is " << volume(6);

    return 0;
}