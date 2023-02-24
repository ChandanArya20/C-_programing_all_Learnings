#include <iostream>
#include <string>
using namespace std;

class Student
{
private: // If we don't write private here then by default it is private
    string name;
    int age;
    float marks;

public:
    void setData()
    {
        cout << "Enter the name of student:  ";
        getline(cin, name);
        cout << "Enter the age of student:   ";
        cin >> age;
        cout << "Enter the marks of student: ";
        cin >> marks;
    }

    void setData(string s, int a, float m)
    {
        name = s;
        age = a;
        marks = m;
    }
    void setName(string s)
    {
        name = s;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setMarks(float m)
    {
        marks = m;
    }
    void getdata()
    {
        cout << "Name is  " + name << endl
             << "Age is   " << age << endl
             << "Marks is " << marks << endl;
    }
    void changeName(string n)
    {
        name = n;
    }
    void changeMarks(float m);
};

void Student::changeMarks(float m)
{
    marks = m;
}

int main()
{

    Student st;
    Student stu[100];
    Student *stPtr = &st;

    Student *dStu = new Student;
    Student *dst = new Student[20];

    // string s="Aryan Arya";
    // int a=23;
    // float m=76.5;
    // st.setData(s,a,m);
    // st.getdata();

    // st.setData("Chandan",20,90);
    // st.getdata();

    // st.setData();
    // st.getdata();

    // stu.changeName("Ram");
    // stu.changeMarks(56);

    // stu[0].setData("Chandan", 20, 89);
    // stu[0].getdata();
    // stu[1].setData("Sainit", 23, 78);
    // stu[1].getdata();
    // stu[2].setData("Ram", 24, 90);
    // stu[2].getdata();

    // stPtr->setData("Chandan T",20,89);
    // stPtr->getdata();

    // dStu->setData();
    // dStu->getdata();
    // delete dStu;

    return 0;
}