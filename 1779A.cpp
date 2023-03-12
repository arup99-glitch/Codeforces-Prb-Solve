#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        if(s.find("RL")<a){
            cout<<"0"<<endl;
        }
        else if(s.find("LR")<a){
            cout<<(s.find("LR")+1)<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
