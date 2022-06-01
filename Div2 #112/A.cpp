#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
const lli maxn=1000005;
int main()
{
    lli t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        lli rslt=0;

        if(n%6==0)
        {
            lli m =(n/6)*15;
            cout<<m<<endl;
            continue;
        }
        else if(n%8==0)
        {
            lli m =(n/8)*20;
            cout<<m<<endl;
            continue;
        }
            else if(n%10==0)
        {
            lli m =(n/10)*25;
            cout<<m<<endl;
            continue;
        }
        else
        {
               rslt=(n/10)*25;
               lli r=n%10;
               if(r==0)
               {
                   continue;
               }
               if(r==1 or r==2)
               {
                 rslt+=5;
               }
               else if(r<5)
               {
                   rslt+=10;
               }
               else if(r<=6 )
               {
                   rslt+=15;
               }
               else if(r<=8 )
               {
                   rslt+=20;
               }
               else
               {
                 rslt+=25;
               }

        }

        cout<<max(15ll,rslt)<<endl;
        //6---15m
        //8---20m
        //10--25m

    }
    return 0;
}


