#include <iostream>
using namespace std;
int divide(int x,int y) throw(int)
{
    if(y==0)
        throw 1;
    return x/y;
}
int main()
{
    int a=12,b=3,c;
    try
    {
        c=divide(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero error "<<endl;
    }
    return 0;
}