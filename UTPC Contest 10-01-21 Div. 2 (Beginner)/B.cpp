#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void solve(ll n, ll c)
{
   ll ara[n+1];
   ll max_=INT_MIN;
   for(int i=0;i<n;i++)
   {
       cin>>ara[i];
       max_=max(max_,ara[i]);
   }
   if(c>max_)
   {
       cout<<"Easy Win!"<<endl;
   }
   else
   {
        cout<<"Difficult Loss"<<endl;
   }
}
int main()
{
    ll n,c;

    cin>>n>>c;
    solve(n,c);
    return 0;
}

