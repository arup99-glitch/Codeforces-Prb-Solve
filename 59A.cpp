#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int  up=0,lo=0,i;
    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            up++;
        }
        else lo++;
    }
    if(up<lo){
       for(i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
       }
    }
    else if(up>lo){
       for(i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
       }
    }
    if(up==lo){
       for(i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
       }
    }
    cout<<s<<endl;
}
