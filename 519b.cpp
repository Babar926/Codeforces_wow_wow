#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a(0), b(0), c(0),d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        a+=d;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>d;
        b+=d;
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>d;
        c+=d;
    }
    cout<<a-b<<endl;

    cout<<b-c<<endl;
    return 0;
    
}