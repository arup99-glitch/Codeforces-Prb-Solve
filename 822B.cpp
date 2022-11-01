#include<iostream>
using namespace std;
int main()
{

    int i,j,n,t;
    cin>>t;
    while(t--){
            cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>1 && j<n){
                cout<<"0"<<endl;
            }
            else cout<<"1"<<endl;
        }
    }
    }
}
