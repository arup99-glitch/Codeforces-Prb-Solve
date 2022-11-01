#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;


#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        ll ans=LLONG_MAX;
        for(int i=1;i<=n-2;i++){
            if(a[i-1]==a[i] and a[i]==a[i+1]){
                ans=0;
                break;
            }
            if(a[i-1]==a[i]){
                ans=min(ans,(ll)a[i+1]-a[i]);
            }
            else if(a[i+1]==a[i]){
                ans=min(ans,(ll)a[i]-a[i-1]);
            }
            else{
                ans=min(ans,(ll)(a[i]-a[i-1])+(a[i+1]-a[i]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
