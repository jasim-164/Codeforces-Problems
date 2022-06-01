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
    int t,n,a,x,y;
    cin>>a>>x>>y;
    /*handle base cases:
    y=0 means on x axis
    x is out of square
    y is hit the border*/

    if(y==0 ||abs(x)>=a || y%a==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    int level=(y/a)+1;//to get height level
    int ans;
    if(level==1)
    {
        if(abs(x)>=((a+1)/2))//check the x out of half square
        {
            ans=-1;
        }
        else
            ans=1;
    }
    else if(level%2 !=0)
    {
        int oddlevel=level/2;//odd levels
        ans=oddlevel*2+(oddlevel-1)+2;//two's square+ones's square+initial 2 square
        if (x<0)
            ans--;
        if(x==0)
            ans=-1;// check the stone touch the y axis
    }
    else
    {
        int oddlevel=(level-1)/2;
        ans= oddlevel*2+(oddlevel+1)+1;
        if(abs(x)>=(a+1)/2)
            ans=-1;
    }

    cout<<ans<<endl;
    return 0;
}


