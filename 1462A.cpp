#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1000];
    int t,n,k,temp;
    cin>>t;
    while(t--)
    {
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>ara[i];
       }
       if(n%2==0)
       {
           for(int i=0;i<n/2;i++)
           {
               cout<<ara[i]<<" "<<ara[n-i-1]<<" ";
           }
           cout<<endl;
       }
       else
       {
        for(int i=0;i<n/2;i++)
        {
           cout<<ara[i]<<" "<<ara[n-i-1]<<" ";
        }
        cout<<ara[n/2]<<endl;
       }


    }

    return 0;
}

