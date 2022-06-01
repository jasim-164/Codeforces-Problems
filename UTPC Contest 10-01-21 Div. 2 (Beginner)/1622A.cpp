#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
void solve()
{
    int ara[4];
    for(int i=0;i<3;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+3);
    if(ara[2]==(ara[0]+ara[1]))
    {
        cout<<"YES"<<endl;
    }
    else if(ara[0]==ara[1])
    {
        if(ara[2]%2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else if( ara[1]==ara[2])
    {
        if(ara[0]%2)
            cout<<"NO"<<endl;
        else
             cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}

