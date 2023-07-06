#include <iostream>
using namespace std;
class MyException1:exception
{

};
class MyException2:MyException1
{

};
int main()
{
    try
    {
        // throw 1;
        // throw 90.6;
        // throw  'R';
        // throw  string("Ram");
        // throw MyException1();
        throw MyException2();

    }
    catch(int e)
    {
        cout<<"Int catch"<<endl;
    }
    catch(double e)
    {
        cout<<"Double catch"<<endl;
    }
    catch(char e)
    {
        cout<<"Char catch"<<endl;
    }
    catch(string e)
    {
        cout<<"String catch"<<endl;
        cout<<e<<endl;
    }
    catch(MyException1 e)
    {
        cout<<"MyException1 catch"<<endl;  
    }
    catch(MyException2 e)
    {
        cout<<"MyException2 catch"<<endl;
    }
    catch(...)
    {
        cout<<"All catch"<<endl;
    }
    return 0;
}