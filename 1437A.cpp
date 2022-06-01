#include<bits/stdc++.h>
using namespace std;
void check(int l,int r)
{int a=r+5;
    if(l%a >=(a/2))
    {
        cout<<"YES"<<endl;
    }
    else if(r%a >=(a/2))
    {
        cout<<"YES"<<endl;
    }
    /*else if(((l+r)/2)%a>=(a/2))
    {
        cout<<"YES"<<endl;
    }*/
    else
    {
        cout<<"NO"<<endl;
    }
    return;
}
int main()
{
    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        check(l,r);
    }


    return 0;
}
