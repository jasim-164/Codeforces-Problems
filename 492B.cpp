#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l;
    cin>>n>>l;
    long long int ara[n+1];
    bool zero=false,one=false;
    int cnt0=0,cntl=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==0)
        {
            zero=true;
            cnt0++;
        }
        if(ara[i]==l)
        {
            one=true;
            cntl++;
        }
    }
    if(cnt0==n||cntl==n)
    {
        cout<<l<<endl;
        return 0;
    }
    if(n==1)
    {
        cout<<max(ara[0],l-ara[0])<<endl;
        return 0;
    }
    sort(ara,ara+n);
    double m=-1;

    for(int i=0;i<n-1;i++)
    {
        if(i==0&&ara[0]!=0)
        {
            m=max(m,ara[0]*1.0);
        }
          if( i==n-2 && ara[i+1]!=l)
        {
            m=max(m,(l-ara[n-1])*1.0);
        }
        else
        {
        double rslt=((ara[i+1]-ara[i])*1.0)/2;
        m=max(m,rslt);
        }
    }

    cout<<fixed<<setprecision(12)<<m*1.0<<endl;

    return 0;
}
