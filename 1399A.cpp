#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,f,i,n;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1; i<n; i++)
        {
            if(a[i]-a[i-1]>1)
            {
                f=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(f==0)
            cout<<"YES"<<endl;
    }
}
