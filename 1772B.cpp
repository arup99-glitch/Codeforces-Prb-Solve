#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        if(a<b&&a<<c&&b<d&&c<d){
            cout<<"YES"<<endl;
        }
        else if(a<b&&a>c&&b>d&&c<d){
            cout<<"YES"<<endl;
        }
        else if(a>b&&a<c&&b<d&&c>d)cout<<"YES"<<endl;
        else if(a>b&&a>c && b>d&&c>d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
