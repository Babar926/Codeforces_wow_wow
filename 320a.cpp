#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k;
    string s;
    bool flag=true;
    cin>>s;
    for(i=0;i<s.size();)
    {
       if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
         {
            i+=3;
         }
         else if(s[i]=='1' && s[i+1]=='4')
         {
           
            i+=2;
         }
         else if(s[i]=='1')
         {
            i++;
         }
         else
         {
            flag=false;
            break;
         }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {

        cout<<"NO"<<endl;
    }
    return 0;
}