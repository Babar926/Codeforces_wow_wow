#include<bits/stdc++.h>
using namespace std;

int solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int c=0;
    string pi="314159265358979323846264338327";
    for(int i=0;i<n;i++)
    {
        if(s[i]==pi[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}