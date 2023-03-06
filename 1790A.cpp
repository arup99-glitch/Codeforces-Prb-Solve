#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<ll>v;
    int t;
    cin>>t;
    while(t--)
    {

        int c=0;


         string pi="314159265358979323846264338327";
         string s;
         cin>>s;

        for(int i=0;i<s.size() && s[i]==pi[i];i++)


                c++;




        cout<<c<<endl;
    }
}
