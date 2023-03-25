#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=2e5+10;
ll f[N];
ll a[N];
void solve(){

    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        f[i]=f[i-1]+a[i];
    }
    int l,r;
    ll k;
    while(q--)
    {
        cin>>l>>r>>k;
        ll sum=f[n]-f[r]+f[l-1]+(r-l+1)*k;
        if(sum&1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
