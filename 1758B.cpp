#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m%2!=0)
        {
            for(int i=0;i<m;i++)cout<<7<<" ";
        }
        else {
            cout<<6<<" "<<"2";
            for(int i=0;i<m-2;i++)
            {
                cout<<4<<" ";
            }cout<<endl;
        }
    }
}
