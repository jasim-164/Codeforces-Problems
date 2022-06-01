#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[2*n+2];
        for(int i=0;i<2*n;i++)
            cin>>ara[i];

        sort(ara,ara+2*n);
        for(int i=0;i<n;i++)
        {
            cout<<ara[i]<<" "<<ara[n+i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
