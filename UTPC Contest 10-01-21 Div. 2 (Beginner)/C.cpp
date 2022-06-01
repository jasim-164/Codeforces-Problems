#include<bits/stdc++.h>
using namespace std;
#define lli long long int
using ll=long long int;
ll  const N=1001;
ll prime[N];

//std::vector<int>v(200,0);
void solve(vector<ll>v,ll n)
{
    if(n<6)
    {
        cout<<"0"<<endl;
    }
    else
    {
       ll c=0;
        for(int i=6;i<=n;i++)
        {
            int cnt=0;
            bool b=true;
            for(auto itr:v)
            {
                if(i%itr==0)
                {
                    cnt++;
                }
                if(cnt>2)
                {
                   b=false;
                   break;
                }
            }
            if(b && cnt==2)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return;
}
void p()
{
    prime[0]=1;
    prime[1]=1;
    vector<ll>v;
    for(int i=2;i*i<=N;i++)
    {
        if(!prime[i])
        {
        for(int j=i*i;j<=N;j+=i)
        {
            prime[j]=1;

        }

        }
    }
    for(int i=2;i<=N;i++)
    {
        if(!prime[i])
        {
             v.push_back(i);
        }
    // oh i see error cause ll and int are both conflict
            //so both of type will be same
    }
    //for(auto itr:v)
    //    cout<<itr<<" ";


    //cout<<v.size()<<endl;
    ll n;
    cin>>n;
    solve(v,n);

    return;
}


int main()
{
    //ll n,c;
    p();
    return 0;
}


