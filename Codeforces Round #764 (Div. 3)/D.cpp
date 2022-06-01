#include<bits/stdc++.h>
using namespace std;
int findValue(int r,int a)
{
    return((r/a)+(r%a));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int l,r,a;
    cin>>l>>r>>a;
    int rslt=findValue(r,a);
    int div=r/a;
    int val=(div)*a-1;
    //cout<<val<<endl;
    if(val>=l and val<=r)
    {
        rslt=max(rslt,findValue(val,a));
    }
    cout<<rslt<<endl;

    }
    return 0;
}
