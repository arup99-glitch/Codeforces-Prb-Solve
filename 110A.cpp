#include<iostream>
#include<array>
using namespace std;
int main()
{
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='4' && n[i]=='7'){
            cout<<"YES"<<endl;
            break;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
}
