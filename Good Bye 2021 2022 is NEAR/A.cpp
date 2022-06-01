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
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        lli prod=0;
        map<lli,lli>mp;
        lli cnt=0;
        int test[500];
        memset(test,-200,sizeof(test));
        f(i,0,n-1)
        {
            cin>>ara[i];
            if(ara[i]==0)
                cnt++;
            mp[ara[i]]++;

            if(ara[i]<0)//for track
                {
                    int val=abs(ara[i]);
                    test[val]=-1;
                }
        }
        if(mp.size()==n)
        {
            cout<<n<<endl;
            continue;
        }
        for(auto itr:mp)
        {
           // cout<<itr.first<<" ";
            if(itr.first!=0 && itr.second>1 && itr.first<0)
                prod+=2;
            else if(itr.first!=0 && itr.second==1 && itr.first<0)
                prod++;
            else if(itr.first!=0 && itr.second>=1 && test[itr.first]==-1)
            {
                if(mp[(itr.first)*-1]>1)
               continue;
               else
               prod++;

            }
              else if(itr.first!=0 && itr.second==1 && test[itr.first]!=-1)
            {
              prod++;
            }
               else if(itr.first!=0 && itr.second>1 && test[itr.first]!=-1)
            {
              prod+=2;
            }
            //cout<<prod<<" ";
        }
        if(cnt>=1)
            prod++;
        cout<<prod<<endl;

    }
    return 0;
}


