#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    int m[n],l[n];

    for(i=0;i<n;i++)
    {
        cin>>m[i]>>l[i];
    }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){

            if(m[i]==l[j])count++;
        }
        }

    cout<<count<<endl;
}
