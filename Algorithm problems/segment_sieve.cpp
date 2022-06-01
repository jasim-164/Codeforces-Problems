#include<bits/stdc++.h>
using namespace std;
#define lli long long int
const lli M=1e2;
const lli N=1e5+5;
bool b[M+2];
vector<lli>p;
bool ara[N];
void sieve()
{
    memset(b,1,sizeof(b));
    lli  maxn=sqrt(M+1);
    b[0]=0;
    b[1]=0;
    for(int i=2;i<=maxn;i++)
    {

        if(b[i]==1)
        {
            for(int j=i+i;j<=M;j+=i)
            {
                b[j]=0;
            }

        }
    }
    for(int i=2;i<=M;i++)
    {
        if(b[i]==1)
            p.push_back(i);
    }
    /*for(auto x:p)
    {
        cout<<x<<" ";
    }*/

}
void seg_sieve(lli l,lli r)
{
    //lli len=r-l+1;
    //bool ara[len];
   // memset(ara,1,sizeof(ara));
    for(auto x:p)
    {
        lli temp=(l/x)*x;//l=21,x=2,temp=20;
        if(l%x!=0)temp+=x;
        for(int i=temp;i<=r;i+=x)
        {
            ara[i-l]=1;
        }
    }

}
int main()
{
    sieve();
    //lli l,r;
    //cin>>l>>r;
    lli l = 20, r = 50, cnt = 0;
    seg_sieve(l,r);
        //lli n;
    //cin>>n;
    //int cnt=0;
    for(int i=0;i<=r-l;i++)
    {
        if(ara[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
    /*if(b[n]==1)
        cout<<"PRIME"<<endl;
    else
        cout<<"NOTPRIME"<<endl;*/

    return 0;
}
