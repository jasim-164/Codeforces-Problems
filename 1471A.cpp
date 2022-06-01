#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        long long int ara[n+1],sum=0,sum1=0,count=0;
        for(int i=0; i<n; i++)
            cin>>ara[i];
        for(int i=0; i<n; i++)
        {
            sum1+=ara[i];
            if(ara[i]%x==0)
            {
                sum+=(ara[i]/x);
            }
            else
            {
                //sum1=sum+1+(ara[i]/x);
                sum+=(ara[i]/x);
                count++;
            }
        }
        if(sum1%x!=0)
        {
        sum1=(sum1/x)+1;
        }
        else
        {
            sum1=sum1/x;
        }
        cout<<sum1<<" "<<(sum+count)<<endl;
    }

    return 0;
}
