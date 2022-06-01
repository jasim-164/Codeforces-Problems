#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n;
    cin>>n;
    lli a[n+1],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<lli>v;
    map<lli,lli>mp;
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n-1);
    for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    //sort(c,c+n);
     for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
           {
               cout<<a[i]<<endl;
               c[n-1]=a[i];
                break;
           }
    }
    sort(c,c+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=c[i])
           {
               cout<<a[i]<<endl;
                break;
           }
    }

}
