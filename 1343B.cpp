#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    long long int sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;

        if(m%4!=0)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(int i=2;i<=m;i+=2)
            {
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1;i<m-2;i+=2)
            {
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }
    }
}
