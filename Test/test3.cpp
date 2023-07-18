#include <iostream>
using namespace std;
string test(){
    return "Ram";
}
int main()
{
    // cout<<test();

    string s="ramlakhan";
    int len=s.append("Mi").length();
    cout<<s<<" "<<len<<endl;
    return 0;
}