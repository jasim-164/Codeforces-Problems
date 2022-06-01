#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
//const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        lli min_=INT_MIN;
        lli maxn= INT_MAX;
        int pos=0,pos1=0;
        f(i,n)
        {
            cin>>ara[i];
            if(ara[i]>min_)
            {
                min_=ara[i];
                pos=i+1;
            }
             if(ara[i]<maxn)
             {
                 pos1=i+1;
                 maxn=ara[i];
             }
        }
        //cout<<pos<<""<<pos1<<endl;
        lli maxp=max(pos,pos1);
        lli minp=min(pos,pos1);
        cout<<min({maxp,n-minp+1,minp+n-maxp+1})<<endl;
        /*int mid=(n+1)/2;
        if(pos<=mid && pos1<=mid)
        {
            if(pos>pos1)cout<<pos<<endl;
            else cout<<pos1<<endl;;
        }
        else if(pos>=mid && pos1>=mid)
        {
            if(pos>pos1)cout<<n-pos1+1<<endl;
            else cout<<n-pos+1<<endl;;
        }
        else
        {
            if(maxp<=(minp+n-maxp+1))
            {
                cout<<maxp<<endl;
            }
            else{
                cout<<minp+n-maxp+1<<endl;
            }
        }*/
    }
    return 0;
}
