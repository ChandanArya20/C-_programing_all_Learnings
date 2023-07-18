#include <iostream>
#include<cmath>
using namespace std;
class Point
{
    int x;
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    Point(Point &obj)       // This is a copy constructor
    {
        x=obj.x;
        y=obj.y;
    }
    void printPoint()
    {
        cout << "Point:" << '(' << x << ',' << y <<')' << endl;
    }

    friend double distancePoint(Point, Point);
};

double distancePoint(Point p1, Point p2)
{
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
int main()
{
    Point p1(3,4);
    Point p2(2,2);
    Point p(p2);
    p.printPoint();
    // cout<<distancePoint(p1,p2);
    return 0;
}