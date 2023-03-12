#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll n,c = 0,temp_sum=0,total_sum=0, ans = INT_MIN;
        cin>>n;
        vector < ll > v(n);
        for(ll i = 0 ; i < n ; i++) {
            cin>>v[i];
            total_sum+=v[i];
        }
        for(ll i = 0 ; i < (n-1); i++) {
            temp_sum = total_sum;

            temp_sum -= v[i];
            temp_sum -= v[i+1];

            temp_sum += -v[i];
            temp_sum += -v[i+1];

            if(temp_sum > ans)
                ans = temp_sum;
        }
        cout<<ans<<endl;
    }
    }

