#include <iostream>
using namespace std;
class Test
{
    int a;
    int b;
    // static int count;
    public:
    static int count;
    Test()
    {
        a=10;
        b=20;
        count++;
    }
    static int getData()
    {
        return count;
    }
};
int Test::count=0;
int main()
{
    cout<<Test::count<<endl;
    cout<<Test::getData()<<endl;
    Test t;
    cout<<t.count<<endl;
    cout<<t.getData()<<endl;
}