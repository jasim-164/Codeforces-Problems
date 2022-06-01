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
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        lli ara1[n+1];
        lli sum=0,sum1=0;
        f(i,n)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
         f(i,n)
        {
            cin>>ara1[i];
            sum1+=ara1[i];
        }
        map<int,int>b;
        map<int,int>s;

        if(sum!=sum1)
        {
          cout<<"-1"<<endl;
          continue;
        }
        else
        {
            int p=0,q=0;
            for(int i=0;i<n;i++)
            {
                if(ara[i]!=ara1[i])
                {
                    if(ara[i]>ara1[i])
                    {
                        int dif=ara[i]-ara1[i];
                        for(int k=0;k<dif;k++)
                        {
                            b.insert({p,i+1});
                            p++;
                        }
                    }
                    else
                    {
                        int dif=ara1[i]-ara[i];
                        for(int k=0;k<dif;k++)
                        {
                            s.insert({q,i+1});
                            q++;
                        }
                    }
                }

            }

        }
        int r=b.size();
        cout<<r<<endl;
        for(int i=0;i<r;i++)
        {
            cout<<b[i]<<" ";
            for(int j=i;j<r;j++)
        {
            cout<<s[j]<<endl;
            break;
        }
        }

    }
    return 0;
}

