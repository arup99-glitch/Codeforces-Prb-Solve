#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;

    cin>>l;
    while(l--)
    {
        int number,count=0;
        string str;
        cin>>number;

        cin>>str;
          int i;
        for(i=0;i<number;i+=2)
        {
           for(int j=1;j<number;j+=2){
              if(str[i]==str[j])
              count+=1;


           }
        }

        if(count>=1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
