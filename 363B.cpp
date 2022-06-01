#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,sum=0,min_;
    cin>>n>>k;
    long long int ara[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
     for(int i=1;i<n;i++)
    {
        ara[i]=ara[i-1]+ara[i];
    }

    int index=0;
    sum=ara[k-1];
    for(int i=k;i<n;i++)
    {
       long long int p=ara[i]-ara[i-k];
        if(p<sum )
        {
            sum=p;
            index=i-k+1;

        }

    }
    //cout<<sum<<endl;
    cout<<index+1<<endl;
    return 0;
}
