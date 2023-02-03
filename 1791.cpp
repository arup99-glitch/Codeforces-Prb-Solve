#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=='c' || s[i]=='o' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='r' || s[i]=='c' || s[i]=='s' )
        {
          cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
