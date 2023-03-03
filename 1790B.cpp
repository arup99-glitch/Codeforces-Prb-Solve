#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,s,r,i,j,val;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>r;
        val=s-r;
        cout<<val<<" ";
        j=1;
        for(j=2;j<=n;j++)
        {
            while(r-val<n-j){
                val--;
            }
            cout<<val<<" ";
            r=r-val;
        }
        cout<<"\n";
    }
}
