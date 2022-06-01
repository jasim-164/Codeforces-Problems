#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,t;

    cin>>t;
    //cin>>a>>b>>n;
    while(t--)
    {   cin>>a>>b>>n;
    int x=0;
    while(max(a,b)<=n)
    {
        if(a>b)
        {
            b+=a;
        }
        else{
            a+=b;
        }
        x++;
    }
cout<<x<<endl;
    }
    return 0;
}

