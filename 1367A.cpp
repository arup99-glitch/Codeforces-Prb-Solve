#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    string s,s1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        c=s.size();
        cout<<s[0];
        for(int i=1;i<c;i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}
