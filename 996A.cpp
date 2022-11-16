#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a;

    b=a/100;
    i=a%100;

    b+=i/20;
    i=i%20;

    b+=i/10;
    i=i%10;

    b+=i/5;
    i=i%5;

    b+=i/1;
    cout<<b<<endl;
}
