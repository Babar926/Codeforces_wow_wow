#include<iostream>
#include<vector>
using namespace std;

void solve()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
cin>> a[i];
}
int common;
if(a[0]==a[1]){common=a[0];}
else if(a[0]==a[2]){common=a[0];}
else if(a[1]==a[2]){common=a[1];}
for(int i=0;i<n;i++)
{
    if(a[i]!=common)
    {
        cout<<i+1;
        break;
    }
}
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}