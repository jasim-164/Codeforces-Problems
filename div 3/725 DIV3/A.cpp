#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
//const lli maxn=1000005;889922447710
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        lli min_=INT_MIN;
        lli maxn= INT_MAX;
        int pos=0,pos1=0;
        f(i,n)
        {
            cin>>ara[i];
            if(ara[i]>min_)
            {
                min_=ara[i];
                pos=i;
            }
             if(ara[i]<maxn)
             {
                 pos1=i;
                 maxn=ara[i];
             }
        }
        if(pos1>pos)swap(pos1,pos);
        cout<<min({pos+1,n-pos1,pos1+1+(n-pos)})<<endl;
    }
    return 0;
}

