#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

using namespace std;

int main()
{

    ll h;
    cin>>h;
    while(h--) {
        ll m,f=0;
        cin>>m;
        vector < ll > v(m);
        for(ll i = 0 ; i < m ; i++)
            cin>>v[i];
        for(ll i = 0 ; i <  m ; i++) {
            for(ll j = i+1 ; j < m; j++) {
                if(__gcd(v[i],v[j]) <= 2) {
                    f = 1;
                    break;
                }
            }
        }
        if(f == 1)
           cout<<"Yes";
        else
           cout<<"No";
        cout<<endl;
    }

    return 0;
 }
