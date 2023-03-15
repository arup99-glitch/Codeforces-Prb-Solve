#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[1]=='a'){

            cout<<s[0]<<" "<<s[1]<<" ";
           for(int i=2;i<=s.size()-1;i++){
            cout<<s[i];
           }

           cout<<endl;
        }
        else{
            cout<<s[0]<<" "<<s.substr(1,s.size()-2)<<" "<<s[s.size()-1]<<endl;
        }
    }
}
