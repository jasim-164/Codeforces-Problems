#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
         int cnt=0;
        int ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]>=k)cnt++;
        }
        sort(ara,ara+n);
       int r=n-cnt;
        for(int i=0;i<r;i++)
        {
            if(ara[i]+ara[r-1]>=k && i!=r-1)
            {
                r--;
                cnt++;
            }

        }
        cout<<cnt<<endl;

    }
}
