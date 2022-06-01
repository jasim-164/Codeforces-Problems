#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int ara[n+1],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum%n!=0)
    {
        cout<<"-1"<<endl;
    }
    else{
        sort(ara,ara+n);
        int val=(sum/n);
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(ara[i]>val)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    }


    return 0;
}
