#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=10000000000;
int main()
{
    lli t,n;
    vector<lli>v;
    for(lli i=1;i<=maxn;i=i*2)
    {
        v.push_back(i);
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli i=0;
        while(1)
        {
            if(v[i]==n)
            {
                cout<<v[i]-1<<endl;
                break;
            }
            if(v[i]>n)
            {
                cout<<v[i-1]-1<<endl;
                break;
            }
            i++;
        }

    }
    return 0;
}

