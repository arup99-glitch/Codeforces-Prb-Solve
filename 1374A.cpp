#include<iostream>
using namespace std;
#define li long long int

int main(){
  li t;
  cin>>t;

  while(t--){
    li x,y,n;
    cin>>x>>y>>n;
    li p=(n-y)/x;
    li k=p*x+y;
    cout<<k<<endl;
  }

}
