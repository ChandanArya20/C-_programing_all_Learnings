#include <iostream>
using namespace std;
class Test
{
    int a;
public:
    Test(int data)
    {
        a=data;
    }
    int operator>(Test x)
    {
        if(a>x.a)
            return 1;
        else
            return 0; 
    }
};
template<class T,class R>
int comp(T x,R y)
{
    return (x>y)?1:2;
}

int main()
{
    Test t1(45);
    Test t2(233);

    string a="chandan";
    string b="dnup";

    // if(sizeof(12.7)>sizeof(a))
    //     cout<<"You are rigth"<<endl;

    cout<<comp(t1,t2)<<endl;
    return 0;
}