#include <iostream>
using namespace std;
class Test
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

    friend void func();
};
void func()
{
    Test t;
    t.a=12;
    t.b=34;
    t.c=67;

    cout<<t.a<<" "<<t.b<<" "<<t.c<<" "<<endl;
}
int main()
{
    func();
    return 0;
}