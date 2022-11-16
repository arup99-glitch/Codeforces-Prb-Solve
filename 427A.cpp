#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,p=0,c=0;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a>0)
        {
            p+=a;
        }else{
        if(p<1){
        ++c;
        }
        else --p;
    }
    }
    cout<<c<<endl;
}
