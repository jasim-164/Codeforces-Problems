#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,val[100],count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
    {
        if(val[i]>=val[k-1]&&val[i]>0)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
