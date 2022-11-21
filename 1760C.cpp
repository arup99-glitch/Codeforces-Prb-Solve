#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x,mx1,mx2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr(n);

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }

        vector<int>arr1(arr);
        sort(arr.begin(),arr.end());

        mx1=arr[n-1];
        mx2=arr[n-2];

        for(i=0;i<n;i++)
        {
            if(arr1[i]!=mx1)
            {
                x=arr1[i]-mx1;
                cout<<x<<" ";
            }
            else{

                x=arr1[i]-mx2;
                cout<<x<<" ";
            }
        }
        cout<<"\n";

    }
}
