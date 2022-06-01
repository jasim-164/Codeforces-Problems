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
        lli a[n+1],b[n+1];
        int sum1=0,sum2=0;
        f(i,n)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        sort(a,a+n);
          f(i,n)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        sort(b,b+n);
        int cnt=0,k=n/4;
        for(int i=0;i<k;i++)
        {
            sum1-=a[i];
            sum2-=b[i];
        }
        if(sum1>=sum2)
        {
            cout<<0<<endl;
            continue;
        }
        int i=k;
        while(sum1<sum2)
        {
            n++;
            cnt++;
            sum1+=100;
            //sum2+=0;
            if(n%4==0)
            {
                sum1-=a[i];
                i++;
            }
            else{
                if(k>0)
                {
                    sum2+=b[k-1];
                    k--;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

