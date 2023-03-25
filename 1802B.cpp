#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0,res=0,k=0;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x==1){
                k++;
                res++;
                ans=max(ans,res);
            }
            else{
                if(k)res=k/2+1;
            }
        }
        cout<<ans<<endl;
    }
}
