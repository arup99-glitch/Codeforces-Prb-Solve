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
        sort(s.begin(),s.end());
        if(s[0]==s[3])cout<<-1<<endl;
        else if(s[0]==s[2] ||s[1]==s[3])cout<<6<<endl;
        else cout<<4<<endl;
    }
}
