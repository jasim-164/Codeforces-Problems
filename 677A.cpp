#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int ara[n+1],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>h)
            count++;
    }
    cout<<2*count+(n-count)<<endl;

    return 0;
}
