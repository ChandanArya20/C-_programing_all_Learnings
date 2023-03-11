#include <iostream>
using namespace std;
// class Demo
// {
//     public:
//     Demo()
//     {
//         cout<<"Constructor of demo"<<endl;
//     }
//     ~Demo()
//     {
//         cout<<"Destructor of demo"<<endl;
//     }
// };
class Demo
{
    int *p;
    public:
    Demo()
    {
        p=new int[20];
        cout<<"Constructor of demo"<<endl;
    }
    ~Demo()
    {
        delete[]p;
        cout<<"Destructor of demo"<<endl;
    }
};
void fun()
{
    // Demo d;
    Demo *p=new Demo;
    delete p;
}
int main()
{
    // Demo d;
    
    fun();
    return 0;
}