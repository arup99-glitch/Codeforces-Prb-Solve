#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)cout<<n/2<<" "<<1<<endl;
        else cout<<-1<<endl;
    }
}
