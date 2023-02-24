#include <iostream>
using namespace std;
class Student
{
    int roll;
    // static int addmissionNum;
    public:
    static int addmissionNum;
    Student()
    {
        addmissionNum++;
        roll=addmissionNum;

    }
    void display()
    {
        cout<<"Roll is "<<roll<<endl;
    }
    int getAmNo()
    {
        return addmissionNum;
    }
};
int Student::addmissionNum=0;

int main()
{
    cout<<Student::addmissionNum<<endl;
    Student stud1,stud2,stud3;
    stud3.display();
    stud2.display();
    stud1.display();

    cout<<Student::addmissionNum<<endl;
    cout<<stud1.getAmNo()<<endl;
    
}