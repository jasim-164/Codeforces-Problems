#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
//const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        lli l,r;
        cin>>n>>l>>r;
        lli ara[n+1];
        vector<lli>v(n);
        /*
        Vector – upper_bound and lower_bound
        Iterator lower_bound (Iterator first, Iterator last, const val)
        Iterator upper_bound (Iterator first, Iterator last, const val)
        lower_bound returns an iterator pointing to the first element in the range [first,last)
        which has a value not less than ‘val’.
        upper_bound returns an iterator pointing to the first element in the range [first,last)
        which has a value greater than ‘val’.
        */
        f(i,n)
        {
            cin>>v[i];
           // v.push_back(ara[i]);
        }
        sort(v.begin(),v.end());
        lli sum=0;
        f(i,n)
        {
            auto itr=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
            auto itr1=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
            sum+=itr1-itr;
        }
        cout<<sum<<endl;
    }
    return 0;
}

