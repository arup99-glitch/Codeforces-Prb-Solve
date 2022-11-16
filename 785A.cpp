#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j=0;
    string s;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s=="Tetrahedron")j+=4;
        if(s=="Cube")j+=6;
        if(s=="Octahedron")j+=8;
        if(s=="Dodecahedron")j+=12;
        if(s=="Icosahedron")j+=20;
    }
    cout<<j<<endl;
}
