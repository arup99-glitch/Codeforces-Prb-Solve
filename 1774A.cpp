#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,x;
        cin>>s;
        int m=0;

        for(int i=1;i<n;i++)
        {
           if(s[i]=='1'){m++;}
           if(m%2!=0){x='-';}
           else x='+';
           cout<<x;
        }
        cout<<endl;
    }
}
