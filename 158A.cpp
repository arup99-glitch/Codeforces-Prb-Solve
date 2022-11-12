#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    int a[t];
   for(int i=0;i<t;i++)
   {
       cin>>a[i];
   }
   int count=0;
   for(int i=0;i<t;i++)
   {
       if(a[i]>=a[n-1]&& a[i]!=0)
       {
           count+=1;
       }
   }
   cout<<count;
   return 0;
}
