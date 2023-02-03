#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        string s;
        cin>>s;
        int c=0,d=0;
        for(int i=0;i<m;i++)
        {

            if(s[i]=='U')
            {
               d++;
            }
             if(s[i]=='R')
            {
               c++;
            }
             if(s[i]=='D')
            {
               d--;
            }
             if(s[i]=='L')
            {
               c--;
            }
            if(c==1 && d==1)break;


        }
        if(c==1 && d==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
