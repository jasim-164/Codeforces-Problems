#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;
    cin>>t;
    lli x,y,a,b;
    while(t--)
    {
       cin>>x>>y;
       cin>>a>>b;
       if(x==0 && y==0)
       {
           cout<<0<<endl;
       }
       else if(x==0 && y!=0)
       {
           cout<<y*a<<endl;
       }
       else if(y==0 && x!=0)
       {
           cout<<x*a<<endl;
       }
       else
       {
           if(2*a>=b)
           {
             lli rslt=min(x,y)*b+abs(x-y)*a;
             cout<<rslt<<endl;
           }
           else
           {
               lli rslt=a*(x+y);
               cout<<rslt<<endl;
           }
       }
    }

    return 0;
}
