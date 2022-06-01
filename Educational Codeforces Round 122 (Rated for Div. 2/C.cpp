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

void solve(int tc)
{
	lli hc, ac, hm, am;
	cin >> hc >> ac >> hm >> am;
	lli k, da, dh;
	cin >> k >> da >> dh;
	for (int x = 0; x <= k; x++)
	{
		lli y = k - x;
		lli h = hc + x * dh;
		lli a = ac + y * da;

		lli req = (hm + a - 1) / a;
		lli allowed = (h + am - 1) / am;
		if (req <= allowed)
		{
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;


    int tests = 1;
    cin >> tests;
    for (int tt = 1; tt <= tests; tt++)
        solve(tt);
    return 0;
}


