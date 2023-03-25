#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        int a[n];
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }
        int s=0;
        int valid,rem=k;
        for(int i=0;i<n;i++)
        {
            if(i==0 or valid<a[i] or rem<1){
                s++;
                rem=k;
                valid=a[i]+w+d;
            }
            rem--;
        }
        cout<<s<<endl;
    }
}
