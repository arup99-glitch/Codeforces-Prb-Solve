#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2){count++;}

    }
    cout<<count<<endl;
}
