#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int n,count=0;
        for(int i=1;i<=a;i++){
                cin>>n;
            if(i%b!=n%b){
                count++;
            }
        }
        if(count==0)cout<<0<<endl;
        else if(count==2)cout<<1<<endl;
        else cout<<-1<<endl;

   }
}

