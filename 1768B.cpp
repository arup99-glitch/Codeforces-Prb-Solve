#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,num,ans,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans = n;
        num=1;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x==num){
                ans--;
                num++;
            }
        }
        cout<<(ans+k-1)/k<<endl;
    }
}
