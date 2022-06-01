#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            int rslt=k-ara[i];
            cnt+=rslt/ara[0];
        }
        cout<<cnt<<endl;
    }


    return 0;
}
