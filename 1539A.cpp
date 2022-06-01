#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        lli n,x,t,rslt=0;
        cin>>n>>x>>t;
        lli val=(t/x);
        if(val>n)
        {
            rslt=(n*(n-1))/2;
            cout<<rslt<<endl;
        }
        else
        {
            rslt=val*n-(val*(val+1))/2;
            cout<<rslt<<endl;
        }
    }
    return 0;
}
