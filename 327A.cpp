#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    int one=0,zero=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i])one++;
        if(!ara[i])
        {zero++;
        if(zero>c)c=zero;
        }
        else if(zero>0)zero--;
    }
    if(c==0)
    {
        c--;
    }
    cout<<one+c<<endl;

    return 0;
}
