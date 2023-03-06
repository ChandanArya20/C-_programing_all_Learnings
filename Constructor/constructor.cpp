#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int len, int bread = 1)
    {
        length = len;
        breadth = bread;
    }
    // Rectangle(int len=0, int bread=0)
    // {
    //     length=len;
    //     breadth=bread;
    // }
    Rectangle(Rectangle &rec)
    {
        length = rec.length;
        breadth = rec.breadth;
    }
    void setData(int length, int breadth=1)
    {
        this->length = length;
        this->breadth = breadth;
    }

    inline void setData();

    int area(int len, int bread)
    {
        return len * bread;
    }
    inline void printData();
};

void Rectangle::setData()
{
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
}

void Rectangle ::printData()
{
    cout << "Length is  " << length << endl;
    cout << "Breadth is " << breadth << endl;
    cout << "Area is    " << area(length, breadth) << endl;
}


// Deep constructor

class Test
{
    int a;
    int *ptr;

public:
    Test(int x)
    {
        a = x;
        ptr = new int[a];

        int count=1;
        for(int i=0;i<a;i++)
        {
            ptr[i]=count++;
        }
    }
    Test(Test &x)
    {
        a = x.a;
        // ptr= x.ptr;
        ptr=new int[a];

        int count=1;
        for(int i=0;i<a;i++)
        {
            ptr[i]=count++;
        }
    }
    void printData()
    {
        cout<< "Size of arry is "<<a<<endl;
        for(int i=0;i<a;i++)
        {
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    // Rectangle rec;
    // rec.printData();

    // Rectangle rec(4,5);
    // rec.printData();

    // Rectangle rec(20);
    // rec.printData();

    // Rectangle rec(20);
    // Rectangle r(rec);
    // rec.printData();
    // r.printData();

    Rectangle rec;
    rec.setData(23,56);
    rec.printData();

    // Rectangle rec;
    // rec.setData();
    // rec.printData();



    Test ts(5);
    Test tst(ts);
    ts.printData();
    tst.printData();

    return 0;
}

