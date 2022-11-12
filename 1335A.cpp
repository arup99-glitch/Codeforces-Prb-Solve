#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;
int a;
for(int i=0;i<t;i++){
    cin>>a;
    if(a==1 || a==2){
        cout<<"0"<<endl;
    }
    else{
        cout<<(a-1)/2<<endl;
    }
}
 return 0;
}
