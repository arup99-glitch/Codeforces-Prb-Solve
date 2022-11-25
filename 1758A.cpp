#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
