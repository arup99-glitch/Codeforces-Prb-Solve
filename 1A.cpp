#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d,e,f;
    cin>>a>>b>>c;
    if(a%c==0){d=a/c;}
    else{d=a/c+1;}
    if(b%c==0){e=b/c;}
    else{e=b/c+1;}
    f=d*e;
    cout<<f<<endl;

}
