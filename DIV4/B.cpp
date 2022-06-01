#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
               if(ara[i]%2==0)
               {
                s1++;
               }
               else{
                s2++;
               }
        }
        if((s1-s2)==n)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<n-s2<<endl;
        }

    }
    return 0;
}
