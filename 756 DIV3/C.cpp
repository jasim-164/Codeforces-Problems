#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define Max 100000000000000
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{

    ll t;
    cin>>t;

    read:
    while(t--){
        ll n;
        cin>>n;

        ll a[n+1];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        if(a[1]==n){
            for(ll i=n;i>1;i--) cout<<a[i]<<" ";
            cout<<n<<endl;
        }
        else if(a[n]==n){
            for(ll i=n-1;i>=1;i--) cout<<a[i]<<" ";
            cout<<n<<endl;
        }
        else cout<<-1<<endl;
    }

    return 0;
}
