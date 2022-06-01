#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        if(a==b)
            cout<<"0 0"<<endl;
        else
        {
            lli gcd=abs(a-b);
            lli m=min(a,b);
            lli r=m%gcd;
            lli rslt=min(r,gcd-r);
            cout<<gcd<<" "<<rslt<<endl;

        }
    }
    return 0;
}

