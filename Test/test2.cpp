#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
    // int *numbers;
    // numbers=new int[2];
    // numbers[0]=12;
    // numbers[1]=13;
    // numbers=new int[4];
    // numbers[2]=14;
    // numbers[3]=15;
    // for(int i=0;i<4;i++)
    // {
    //     cout<<numbers[i]<<" ";
    // }


    // int n=8;
    // int** arr=new int*[n];
    // for(int i=0;i<n;i++){
    //     arr[i]=new int[n];
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++)
    //         arr[i][j]=12;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++)
    //         cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }

    // int arr[]={1,2,3,4,5};

    array<int,5> arr={1,2,3,4,5};
   
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}