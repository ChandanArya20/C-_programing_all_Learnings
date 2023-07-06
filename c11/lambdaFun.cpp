#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    [](){cout<<"Helo World"<<endl;}();

    // int x=[](int x,int y){return x+y;}(10 ,5);
    // cout<<x<<endl;

    // auto sum=[](int x,int y){return x+y;}(10,40);
    // cout<<sum<<endl;

    // auto sum=[](int x,int y){return x+y;};
    // cout<<sum(10,20)<<endl;

    // int a=20;
    // int b=50;
    // [a,b](){cout<<a+1<<" "<<b+1<<endl;}();
    // cout<<a<<" "<<b<<endl;

    // int a=20;
    // int b=50;
    // [&a,&b](){cout<<++a<<" "<<++b<<endl;}();
    // cout<<a<<" "<<b<<endl;

    int a=20;
    int b=50;
    cout<<a<<" "<<b<<endl;
    [&a,&b](){swap(a,b);}();
    cout<<a<<" "<<b<<endl;

    

    return 0;
}