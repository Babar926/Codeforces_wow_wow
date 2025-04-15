#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<b<<" ";
    }
    else
    {
        cout<<a<<" ";
    }
    int result =abs(a-b)/2;
    cout<<result;

}