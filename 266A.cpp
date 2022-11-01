#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x = 0;
    char stone[50];
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>stone[i];
       // cout<<stone[i];
    }

    for(int i=0;i<n;i++){
        if(stone[i]==stone[i+1]){
            x++;
        }
    }
    cout<<x;
}
