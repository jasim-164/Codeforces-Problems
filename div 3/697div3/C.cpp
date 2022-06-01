#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define f(i,n) for(int i=0;i<n;i++)

int main()
{
    lli p,t,n,n1=2020,n2=2021;
    cin>>t;
    while(t--)
    {
       cin>>n;
       for(int i=0;i<1000;i++)
       {
           for(int j=0;j<1000;j++)
           {
               if(n1*i+n2*j==n)
               {
                    cout<<"YES"<<endl;
                        t=1;
                        break;
               }
           }
           if(t==1)
           {
               break;
           }

       }
       if(t!=1)
       {
           cout<<"NO"<<endl;
       }
    }
}
