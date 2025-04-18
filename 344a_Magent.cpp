#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mag[100000];
    int count=0;

    for(int i=0;i<n;i++)
    {
        cin>>mag[i];
    }

    for(int i=0;i<n;i++)
    {
        if(mag[i]!=mag[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}