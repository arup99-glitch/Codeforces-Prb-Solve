#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,a,b,c;
   cin>>t;
   while(t--)
   {
       cin>>a>>b>>c;
       if(c-b==a)
        cout<<'+'<<endl;
       else
        cout<<'-'<<endl;
   }
   return 0;
}
