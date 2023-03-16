#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;
        if(s[1]='+'){
            int n=s[0]+s[2]-96;
        cout<<n<<endl;
        }
        else if(s[1]='-')
        cout<<s[0]-s[2]<<endl;
    }
}
