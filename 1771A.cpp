#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>m;
    int max=0,c=0;
   while(m--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])c=1;
             else if(a[i]==a[i+1])c+=2;
        }
        cout<<c*2<<endl;
    }
}
