#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,x=0;
        cin>>n;
        x=n*(n-1);
        for(int i=1;i<=n;i++){
            x=(x*i)%1000000007;

        }
        cout<<x<<endl;
    }
}
