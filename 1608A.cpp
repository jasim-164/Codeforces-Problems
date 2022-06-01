#include<bits/stdc++.h>
using namespace std;
using lli=long long int;
const lli N=1e4;
lli ara[N+1];
vector<lli>v;
void prime()
{
    ara[0]=1;
    ara[1]=1;
    for(int i=2;i<sqrt(N);i++ )
    {
        if(!ara[i])
        {
        for(int j=i*i;j<=N;j+=i)
        {
            ara[j]=1;
        }
        }
    }

    for(int i=1;i<=N;i++)
    {
        if(!ara[i])
            v.push_back(i);
    }

}
void solve(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    prime();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }

}

