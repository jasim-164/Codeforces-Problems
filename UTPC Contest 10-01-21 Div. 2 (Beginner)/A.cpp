#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void solve(ll n, char c)
{
    if(c=='d')
    {
        while(n!=0)
        {
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
    }
    else
    {
        ll i=1;
          while(n>=i)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<endl;
    }
}
int main()
{
    ll n;
    char c;
    cin>>n>>c;
    solve(n,c);
    return 0;
}
