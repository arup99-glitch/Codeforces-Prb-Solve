#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,d=0;
    cin>>a>>b;
    int res = 240-b;
    for(int i=1;i<=a;i++)
    {
       c+=5*i;
       if(c<=res)d++;
    }
    cout<<d;
}
