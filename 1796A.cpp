#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll f=0,s;
        string in;
        cin>>s;
        cin>>in;
        string m="";
        for(int i=0;i<=50;i++)
        {
            if(i%3 == 0)
                m+='F';
            if(i%5 == 0)
                m+='B';
        }
        for(int i=0;i<8;i++)
        {
            if(m.substr(i,s)==in)
            {
                f=1;
                break;
            }
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
