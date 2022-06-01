#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int n;
    cin>>n;
    lli ara[n+1];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    lli m=INT_MAX,cnt=0,sum=0;
    for(int i=n-1;i>=0;i--)
        {
            m=min(ara[i],m-1);
            sum+=max(0LL,m);

        }
        cout<<sum<<endl;
    return 0;
}
