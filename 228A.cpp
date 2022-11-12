#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],t=4,c=0,n=1,b=0;

    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=0;i<3;i++)
    {
         if(arr[i]==arr[i+1]){

            c++;
         }

        }
        cout<<c<<endl;
}
