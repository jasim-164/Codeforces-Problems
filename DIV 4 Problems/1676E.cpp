#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000005;
int main()
{
    int t,n,q;
    //char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<lli>v1(n);
        vector<lli>v2(q);
        lli sum=0;
        f(i,0,n-1)
        {
            cin>>v1[i];
            sum+=(v1[i]);
        }
        f(i,0,q-1)
        {
            cin>>v2[i];

        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
           f(i,1,n-1)
        {
            v1[i]+=v1[i-1];
            //cout<<v1[i]<<" ";
        }
        //cout<<endl;
         f(i,0,q-1)
        {
            int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(v1[mid - 1] >= v2[i]) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";


        }



    }
    return 0;
}


