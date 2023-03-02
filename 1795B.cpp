#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int n,k,c=0;
        cin>>n>>k;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a==k)c++;
            if(b==k)c++;
        }
        if(c>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
