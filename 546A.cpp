#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,n,w,s=0,x,y;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
         s+=i;


    }
    x=(s*k)-n;
    if(x<0)cout<<"0";
    else
        cout<<x<<endl;
}
