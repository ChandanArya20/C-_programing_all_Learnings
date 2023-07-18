#include <iostream>
#include <cstring>
using namespace std;
class Student
{

public:
    int roll;
    string name;
    void setData(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }
    void printData()
    {
        cout << "Your roll is " << roll << endl
             << "Your name is " << name << endl;
    }
};
int main()
{
    int size = 3;
    Student str;
    Student *ptr = &str;
    // Student *st = new Student;
    // Student st[size];
    // Student st[3];
    Student *st = new Student[size];
    // int *p=new int(45);

    // delete p;
    // cout<<*p<<endl;

    // str.setData(13, "Gulshan");
    // str.printData();

    // ptr->setData(13, "Gulshan");
    // ptr->printData();

    // (*ptr).setData(13, "Gulshan");
    // (*ptr).printData();
    // delete[] st;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter roll and name for student " << i + 1 << endl;
        cin >> (st + i)->roll >> (st + i)->name;
    }

    // int roll;
    // string name;
    // Student *ptrTemp=st;
    // for(int i=0;i<size;i++)
    // {
    // cout<<"Enter roll and name for student "<<i+1<<endl;
    // cin>>roll>>name;
    // start->setData(roll,name);
    // start++;
    // st + (i + 1);
    // }
    for (int i = 0; i < size; i++)
    {
        (st + i)->printData();
    }

    // delete st;
    // st->setData(12, "Chandan");
    // st->printData();

    return 0;
}