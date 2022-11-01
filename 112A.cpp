#include<iostream>
using namespace std;

int main(){

string a,b;
cin>>a>>b;
int i;
for(i=0;i<a.size();i++){
    a[i] = towlower(a[i]);
    b[i] = towlower(b[i]);
}
if(a==b){
    cout<<"0"<<endl;
}
else{
    for(i=0;i<a.size();i++){
        if(a[i]>b[i]){
                cout<<"-1"<<endl;
        break;
        }
        else if(a[i]<b[i]){
                cout<<"1"<<endl;
        break;
        }
    }
}
return 0;
}

