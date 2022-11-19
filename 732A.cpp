#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,d=0,e;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        d+=a;
        if(d%10==0 || d%10==b)
        {
            cout<<i<<endl;
            break;
        }
        else continue;

    }
}
