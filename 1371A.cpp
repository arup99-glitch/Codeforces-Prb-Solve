#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long t,n;
  cin>>t;
  while(t--){
    cin>>n;
    if(n<=2) cout<<1<<endl;
    else cout<<1+(n-1)/2<<endl;
  }
  return 0;
}
