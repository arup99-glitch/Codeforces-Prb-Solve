#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string s,a;
     cin>>s;
     cin>>a;
     reverse (s.begin(),s.end());
     if(s==a)
     {
         cout<<"YES";
     }
     else{
        cout<<"NO";
     }
 }
