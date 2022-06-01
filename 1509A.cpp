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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1],e=0,o=0;
        vector<lli> odd;
        vector<lli> even;
        f(i,n)
        {
            cin>>ara[i];
            if(ara[i]%2==1)
            {
                odd.push_back(ara[i]);
                o++;
            }
            else
            {
                even.push_back(ara[i]);
                e++;
            }
        }
        /*if(e==0)
        {
            sort(odd.begin(),odd.end());

           for(int i=odd.size()-1;i>=0;i++)
            {
                cout<<odd[i]<<" ";
            }
            cout<<endl;
        }
        else if(o==0)
        {
            sort(even.begin(),even.end());
              for(int i=0;i<even.size();i++)
            {
                cout<<even[i]<<" ";
            }
            cout<<endl;
        }*/
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
            for(int i=odd.size()-1;i>=0;i--)
            {
                cout<<odd[i]<<" ";
            }
              for(int i=0;i<even.size();i++)
            {
                cout<<even[i]<<" ";
            }
            cout<<endl;


    }
    return 0;
}

