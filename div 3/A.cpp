#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define inf 0
int main()
{
    unsigned long long int t,x,y,n,p;
int max = INT_MIN;
cout<<max<<endl;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        for(int i=n;i>=0;i--)
        {
            if(i%x==y)
            {
                 if(i>max)
                 {
                     max=i;
                 }
            }
        }
        cout<<max<<endl;
        max=0;
    }
    return 0;
}

