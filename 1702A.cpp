#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=log10(n);
        b=pow(10,a);
        c=n-b;
        cout<<c<<endl;
    }
}
