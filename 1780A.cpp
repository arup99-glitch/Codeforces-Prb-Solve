#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         vector<int>a;
            vector<int>b;

        for(int i=1;i<=n;i++)
        {
           int x;
           cin>>x;
           if(x&1) b.push_back(i);
           else a.push_back(i);

        }
        if(b.size()>=3)cout<<"YES"<<endl<<b[0]<<" "<<b[1]<<" "<<b[1]<<endl;
        else if(b.size()&& a.size()>=2)cout<<"YES"<<endl<<b[0]<<" "<<a[0]<<" "<<a[1]<<endl;
        else cout<<"NO"<<endl;

    }
}
