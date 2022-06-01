#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int n;
    cin>>n;
    lli ara[n+1],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+n);
    lli rslt=sum;
    for(int i=1;i<n;i++)
    {
        lli sum1=sum-2*ara[i];

            rslt+=sum;
    }
    for(int i=1;i<n-2;i++)
    {
        if(i%2==1)
        {
            lli sum1=sum-2*ara[i]-2*ara[i+2];
            rslt+=sum1;
        }
    }
        for(int i=1;i<n-2;i++)
    {
        if(i%2==0)
        {
            lli sum1=sum-2*ara[i]-2*ara[i+2];
            rslt+=sum1;
        }
    }
    cout<<rslt<<endl;




    return 0;
}
