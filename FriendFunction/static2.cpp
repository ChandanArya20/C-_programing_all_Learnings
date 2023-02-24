#include <iostream>
using namespace std;
class InnovaCar
{
    static int price;
    public:
    static int getPrice()
    {
        return price;
    }


};
int InnovaCar::price=20;

int main()
{
    cout<<InnovaCar::getPrice()<<endl;
    InnovaCar icar;
    cout<<icar.getPrice()<<endl;
}