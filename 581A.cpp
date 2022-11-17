#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>b)
    {
        cout<<b<<" ";
        c=a-b;
        cout<<c/2<<endl;
    }
    else{
        cout<<a<<" ";
        c=b-a;

        cout<<c/2<<endl;
    }
}
