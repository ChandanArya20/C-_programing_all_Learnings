#include <iostream>
using namespace std;
class MyException
{
    public:
    void what()
    {
        cout<<"Divided by zero error"<<endl;
    }
};
int divide(int x,int y) throw(MyException)
{
    MyException myException;
    if(y==0)
        throw myException;
    return x/y;
}

int main()
{
    int a=12,b=0,c;
    try
    {
        c=divide(a,b);
        cout<<c<<endl;
    }
    catch(MyException e)
    {
        e.what();
    }
    return 0;
}