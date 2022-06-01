#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
      int xa,ya,xb,yb,xf,yf;
      cin>>xa>>ya>>xb>>yb>>xf>>yf;
     int largeA=max(xa,xb);
      int minA=min(xa,xb);
     int large_y=max(ya,yb);
      int min_y=min(ya,yb);
      if(xa==xb && ya==yb)
        cout<<0<<endl;
      else if(xa==xb &&xa!=xf)
      {
          cout<<abs(yb-ya)<<endl;
      }
      else if(xa==xb &&xa==xf &&(yf>min_y && yf<large_y))
      {
          cout<<abs(yb-ya)+2<<endl;
      }
      else if(ya==yb && ya!=yf)
      {
          cout<<abs(xa-xb)<<endl;
      }
       else if(ya==yb && ya==yf && (xf>minA&& xf<largeA))
      {
          cout<<abs(xa-xb)+2<<endl;
      }
      else{
        cout<<abs(xa-xb)+abs(ya-yb)<<endl;
      }

    }
    return 0;
}

