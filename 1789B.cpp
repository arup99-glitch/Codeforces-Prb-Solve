#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j;
    vector<int>v;
    cin>>n;
    while(n--)
    {
        int t,c=0;
        cin>>t;
        int a[t];
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            v.push_back(i);
        }
        int s=0;
        int e=t;
        while(s!=t){
            if(v[s]!=v[e]){
              if(v[s]==1) v.at(s)=0;
              if(v[s]==0) v.at(s)=1;

              s++;
              e--;
            }
            else{
                c=1;
            }
        }
        if(c==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
