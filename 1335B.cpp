#include<iostream>
using namespace std;
int main()
{
    int t,length,substr,distinct,i,count;
    cin>>t;
    while(t--)
    {
        cin>>length>>substr>>distinct;
        string s;
        char ch = 'a';
        for(i=1,count=1;i<=length;i++,count++)
        {
            s.push_back(ch);
            ch++;
            if(count == distinct)
            {
                ch='a';
                count=0;
            }
            if(ch>'z')
            {
                ch='a';
            }
        }
        cout<<s<<endl;
    }
}
