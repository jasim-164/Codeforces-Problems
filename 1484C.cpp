#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vi v;
        vi out;
        f(i,m)
        {
            int k;
            cin>>k;
            f(j,k)
            {
            int x;
            cin>>x;
            v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        int c=0,cnt=0;;
        for(int i=0;i<v.size();i++)
        {
           if(v[i]==v[i+1])
           {
            c++;
           if(c<=ceil(m*1.0/2))
           {
               out.push_back(v[i]);
               cnt++;
           }
           else
           {
               continue;
           }
           }
           else{
            if(c+1<=ceil(m*1.0/2))
            {
              out.push_back(v[i]);
              cnt++;
            }
            c=0;
           }
           if(cnt==m)
           {
               break;
           }

        }
        if(out.size()==m)
        {
            cout<<"YES"<<endl;
            for(auto itr:out)
                cout<<itr<<" ";
            cout<<endl;
        }
        else
        {

            cout<<"NO"<<endl;
        }
    }
    return 0;
}
