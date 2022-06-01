#include<bits/stdc++.h>
using namespace std;
#define  lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int dif=y-x;
        cout<<x<<" "<<y<<" ";
        lli sum=y;
        for(int i=1;i<=n-2;i++)
        {
            sum+=dif;
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
