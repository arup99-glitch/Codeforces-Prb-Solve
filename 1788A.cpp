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
        int a[n],c=0,s=0,ans=-1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==2)c++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)s++;
            if(s*2==c){
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
}
