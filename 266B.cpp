#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    for (int i=0;i<b;i++){
       for(int j=0;j<s.size()-1;j++) {
            if(s[j]=='B' && s[j+1]=='G'){
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    cout<<s<<endl;
}
