#include<bits/stdc++.h>
using namespace std;

int maximum(int *ara,int n)
{
    int max_val=-2147483648;
    for(int i=0; i<n; i++)
    {
        if(ara[i]>max_val)
        {
            max_val=ara[i];
        }
    }
    return max_val;
}
void max_sum(int *ara,int n,int k)
{
    while(k--)
    {

        int d=maximum(ara,n);
        for(int i=0; i<n; i++)
        {
            ara[i]=d-ara[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t,n,k;
    int ara[10000];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>ara[i];
        max_sum(ara,n,k);
    }
    return 0;
}
