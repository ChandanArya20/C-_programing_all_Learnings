#include <iostream>
using namespace std;
class Student
{
    string name;
    int roll;

public:
    Student()
    {
        cout << "Constructor has been called" << endl;
    }
    ~Student()
    {
        cout << "Destructor has been called" << endl;
    }
    void readData()
    {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll: ";
        cin >> roll;
    }
    void disData()
    {
        cout << '\n' << name << " " << roll;
    }
};

int main()
{
    Student st1;
    {
        Student st2;
        st2.readData();
        st2.disData();
    }
    return 0;
}