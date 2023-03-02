#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        string h,s;
        cin>>a>>b>>h>>s;
        reverse(s.begin(),s.end());
        string k=h+s;
        int c=0;
        for(int i=0;i<k.size();i++)
        {
            if(k[i]==k[i+1])c++;
        }
        if(c>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
