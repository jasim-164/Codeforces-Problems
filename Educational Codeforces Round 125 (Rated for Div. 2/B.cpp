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
        lli ara[n+1];
        map<lli,lli>freq;
        lli sum=0;
        f(i,0,n-1)
        {
            cin>>ara[i];
            sum+=ara[i];
            freq[ara[i]]++;
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        priority_queue<lli>pq;
        pq.push(sum);
        bool b=true;
        while(!pq.empty())
        {
            lli top=pq.top();
            //cout<<top<<" ";
            pq.pop();
            int p=top/2;
            int q=(top+1)/2;
            if(freq[p]>0 )
                freq[p]--;
            else if(freq[p]==0 and p>1)
            {
                pq.push(p);
            }
            if(freq[q]>0 )
             freq[q]--;
            else if(freq[q]==0 and q>1)
            {
                pq.push(q);
            }
            if(pq.size()>n+2)
            {
                b=false;
                break;
            }
        }
          f(i,0,n-1)
        {
            if(freq[ara[i]]>0)
            {
                b=false;
                //cout<<freq[ara[i]]<<endl;
                break;
            }
        }
        if(b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}


