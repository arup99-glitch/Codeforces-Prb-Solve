#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string st;
        cin>>st;
        int s=0;int e=n-1;
        while(s<e)
        {
            if(st[s] != st[e]){
                s++;e--;
                n-=2;
            }
            else break;
        }
        cout<<n<<endl;
    }

}
