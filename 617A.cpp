#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%5==0){
        cout<<a/5;
    }
    else
        cout<<(a/5)+1;

    return 0;
}
