#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=1;i<a;i++)
    {
        if(i%2!=0)cout<<"I hate that"<<" ";
        if(i%2==0) cout<<"I love that"<<" ";
    }
    if(a%2!=0)cout<<"I hate it"<<" ";
    if(a%2==0) cout<<"I love it"<<" ";
}
