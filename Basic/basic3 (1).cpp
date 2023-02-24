#include <iostream>
using namespace std;
void swap(int &a, int &b);
int& retByRef(int &x);

int main()
{
    int a=10;
    int b=20;
    int &x=a;

    // cout<<a<<endl;
    // cout<<x<<endl;

    // cout<<++a<<endl;
    // cout<<a<<endl;

    // cout<<(x+5)<<endl;
    // cout<<x<<endl;

    // cout<<a<<"  "<<b<<endl;
    // swap(a,b);
    // cout<<a<<"  "<<b<<endl;
    
    // retByRef(a)=45;
    // cout<<a<<endl;


    return 0;
}

void swap(int &a, int &b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}

int& retByRef(int &x)
{
    cout<<x<<endl;
    return x;
}