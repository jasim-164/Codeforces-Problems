#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int ara[n+1];
    for(int i=0;i<n;i++)
    {
        ara[i]=s[i]-97+1;
    }
    for(int i=1;i<n;i++)
    {
        ara[i]=ara[i-1]+ara[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==1)
            cout<<ara[r-1]<<endl;
        else
            cout<<ara[r-1]-ara[l-2]<<endl;
    }
    return 0;
}
