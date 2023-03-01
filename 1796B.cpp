#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b,first="",second="";

        cin>>a>>b;
        int a_sz=a.size();
        int b_sz=b.size();
        for(int i=0;i<(a_sz-1);i++){
            for(int j=0;j<(b_sz-1);j++){
                if(a[i]==b[j] & a[i+1]==b[j+1]){
                    first = a[i];
                    second = a[i+1];
                    break;
                }
            }
            if(first!="")
                break;
            }
            if(first!=""){
                cout<<"YES"<<endl;
            }
            else{
                if(a[0]==b[0]){
                    cout<<"YES"<<endl;
                    cout<<a[0]<<"*"<<endl;
                }
                else if(a[a_sz-1]==b[b_sz-1]){
                    cout<<"YES"<<endl;
                    cout<<"*"<<a[a_sz-1]<<endl;
                }
                else cout<<"NO"<<endl;
            }

    }
    return 0;
}
