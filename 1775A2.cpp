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
        int n=s.size();
        if(s[0]=='a' && s[1]=='b'){

            cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;;



         ;
        }

        else{
            cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n-2)<<endl;
        }
    }
}
