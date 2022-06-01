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
        lli h,w,k;
        cin>>w>>h;
        cin>>k;
        lli x1[k+1];
        lli largex1=0,largex2=0,largey1=0,largey2=0;
           f(i,0,k-1)
        {
            cin>>x1[i];
            largex1=x1[i];
        }
        cin>>k;
        lli x2[k+1];
           f(i,0,k-1)
        {
            cin>>x2[i];
            largex2=x2[i];
        }
        //lli dx=abs(largex1-largex2);
         cin>>k;
        lli y1[k+1];
           f(i,0,k-1)
        {
            cin>>y1[i];
            largey1=y1[i];
        }

          cin>>k;
        lli y2[k+1];
           f(i,0,k-1)
        {
            cin>>y2[i];
             largey2=y2[i];
        }
        //first
        lli area1=abs(x1[0]-largex1)*h;
        //cout<<area1<<endl;
        lli area2=abs(x2[0]-largex2)*h;
        lli area3=abs(y1[0]-largey1)*w;
        lli area4=abs(y2[0]-largey2)*w;
        lli m=max(area3,area4);
        lli m1=max(m,max(area1,area2));
        cout<<m1<<endl;



    }
    return 0;
}

