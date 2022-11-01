#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,i,a=0,b=0;
    cin>>n;
    string s;
    cin>>s;

    for (i=0;i<n;i++){

        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='D'){
            b++;
        }
    }
    if(a>b)cout<<"Anton"<<endl;
    else if(a<b)cout<<"Danik"<<endl;
    else if(a==b) cout<<"Friendship"<<endl;
   return 0;
}
