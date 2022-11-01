#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cin>>n>>j;
    int a[n];
    int count1=0,count2=0;

    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         if(a[i]<=j){
            count1++;
         }
         else{
            count2+=2;
         }
    }
    cout<<count1+count2<<endl;
}
