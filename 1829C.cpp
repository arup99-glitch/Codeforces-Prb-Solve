#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--)
  {
      int n,x;
      cin>>n;
      int a=INT_MAX;
      string s;
      int p,q,r;
      p=q=r=a;

      for(int i=0;i<n;i++){
        int m;
        cin>>m>>s;
        if(s=="01")p=min(p,m);
        else if(s=="10")q=min(q,m);
        else if(s=="11")r=min(r,m);
      }
      if(p==INT_MAX || q==INT_MAX){
        x=min(r,INT_MAX);
        if(r==INT_MAX)cout<<-1<<endl;
        else cout<<x<<endl;
      }
      else cout<<min(p+q,r)<<endl;
  }

}
