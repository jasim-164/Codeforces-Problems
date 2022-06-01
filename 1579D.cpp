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
    int t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
          vector<int>v;
        lli ara[n+1];
        lli sum=0,pos=0;
        f(i,0,n-1)
        {
            cin>>ara[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(ara[i]!=0)
            {
            for(int j=0;j<n;j++)
            {
                if(i!=j && ara[j]!=0)
                {

                   if(ara[i]<=ara[j])
                   {
                       ara[j]-=ara[i];
                       ara[i]=0;
                       mp.insert({i,j});
                       sum+=ara[i];
                       v.push_back(ara[i]);
                   }
                   else
                   {
                       ara[i]-=ara[j];
                       ara[j]=0;
                       mp.insert({i,j});
                       sum+=ara[j];
                       v.push_back(ara[j]);
                   }
                }
            }
            }
        }
        cout<<sum<<endl;
        map<int,int>::iterator itr;
        /*for(auto itr: v)
        {
            int j=0;
            itr
            for(int i =0;i<itr;i++)
            {
                itr
            }
        }*/




    }
    return 0;
}



