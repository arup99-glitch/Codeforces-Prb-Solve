#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,p=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            if(y==0){
                ans++;
                p=max(ans,p);
            }
            else ans=0;
        }
        cout<<p<<endl;
    }
}
