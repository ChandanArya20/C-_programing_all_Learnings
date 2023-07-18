#include <iostream>
#include <cstdlib>
using namespace std;
class Student
{
protected:
    int roll;

public:
    void setRoll(int r)
    {
        roll = r;
    }
    void printRoll()
    {
        cout << "Your roll number is " <<roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void setMarks(float m, float p)
    {
        math = m;
        physics = p;
    }
    void printMarks()
    {
        cout << "Your result is hsre" << endl
             << "Math    :" << math << endl
             << "Physics :" << physics << endl;
    }
};

class Score : virtual public Student
{
protected:
    float score;

public:
    void setScore(float s)
    {
        score = s;
    }
    void printScore()
    {
        cout << "Your score is " << score << endl;
    }
};

class Result : public Test, public Score
{
    float total;

public:
    void display()
    {
        total = math + physics + score;
        printRoll();
        printMarks();
        printScore();
        cout << "Ypur total marks is " << total << endl;
    }
};
int main()
{
    system("cls");
    Result res;
    res.setRoll(34);
    res.setMarks(67.8, 90);
    res.setScore(78);
    res.display();
    return 0;
}