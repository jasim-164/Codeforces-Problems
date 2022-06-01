#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,pos,pos1;
    cin>>n;
    int ara[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    int Max=*max_element(ara+1,ara+n+1);
    int Min=*min_element(ara+1,ara+n+1);
    //cout<<Max<<" "<<Min<<endl;
    bool b=true;
       for(int i=1;i<=n;i++)
    {
        if(b)
        {
            if(ara[i]==Max)
            {
                pos=i;
                b=false;
            }
        }
        if(ara[i]==Min)
            pos1=i;
    }

    cout<<((pos>pos1) ? pos-1+n-pos1-1 : pos-1+n-pos1)<<endl;


    return 0;
}

