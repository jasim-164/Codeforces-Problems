#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                int a=abs(1-i)+abs(1-j);
                int b=abs(1-i)+abs(m-j);
                int c=abs(n-i)+abs(1-j);
                int d=abs(n-i)+abs(m-j);
                int x=max(a,max(b,max(c,d)));
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
    }
}
