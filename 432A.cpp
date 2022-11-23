#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(5-a[i]>=k)
        {
            count++;
        }
    }
    if(count>=3)
    {
        cout<<count/3<<endl;
    }
    else cout<<0<<endl;
}
