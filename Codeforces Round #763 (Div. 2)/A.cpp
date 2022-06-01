#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        lli rb,cb,rd,cd,m,n;
        cin>>n>>m;
        cin>>rb>>cb>>rd>>cd;
        if(rb==rd)
            cout<<"0"<<endl;
        else if(cb==cd)
             cout<<"0"<<endl;
        else{
                lli cnt1=0;
                lli dx=1,dy=1;
            for(;;)
            {

                 if(rb==rd or cd ==cb)
                    break;

                 if(rb+dx<1 ||rb+dx>n)
                {
                    dx=-1*dx;
                    //dy=-1*dy;
                }
                if(cb+dy<1 || cb+dy>m)
                {
                    dy=-1*dy;
                }
                rb+=dx;
                cb+=dy;
                cnt1++;


            }
               // lli cnt1=0;
               // lli dx=1;

            cout<<cnt1<<endl;
        }
    }
    return 0;
}


