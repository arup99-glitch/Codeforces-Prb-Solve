#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;


#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

int t;
cin>>t;
while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans1 =abs(a-1);
        int ans2 =abs(b-c)+(c-1);
        if(ans1==ans2){
            cout<<3<<endl;
        }
        else if(ans1<ans2){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

}

return 0;
}
