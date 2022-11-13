#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    j=s.size();
    for(i=0;i<j;i++)
    {
        if(s[i]!=s[i+1])k++;
    }
    if(k%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
