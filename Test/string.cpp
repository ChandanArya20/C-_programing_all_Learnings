#include <iostream>
using namespace std;
int main()
{
    string s1= "chandan";
    string s2= "anup";
    string s3 = s1;

    // cout<<s3<<endl;

    // int flag=s1>s2;
    int flag=s3.compare(s1);
    cout<<"flag= "<<flag<<endl;

    


    if(s1>s2)
        cout<<"s1 is bigger";
    else
        cout<<"s2 is bigger"; 

    return 0;
}