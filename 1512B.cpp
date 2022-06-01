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
    int t1,n;
    cin>>t1;
    while(t1--)
    {
        cin>>n;
        char c[n+1][n+1];
        int r1,r2,c1,c2,t=0;
        f(i,n)
        {
            f(j,n)
            {
                cin>>c[i][j];

                if(t==1 && c[i][j]=='*')
                {
                   c2=j;
                   r2=i;
                    t=0;
                }

                else if(c[i][j]=='*')
                {
                    c1=j;
                    r1=i;
                    t=1;
                }

            }
        }
            //c[r1][c2]='*';
            //c[r2][c1]='*';
        if(r1==r2 && r1==0)
        {
            c[r1+1][c1]='*';
            c[r2+1][c2]='*';
        }
        else if(r1==r2&& r1<=n-1)
        {
            c[r1-1][c1]='*';
            c[r2-1][c2]='*';
        }
        else if(c1==c2 && c1==0)
        {
             c[r1][c1+1]='*';
            c[r2][c2+1]='*';
        }
         else if(c1==c2 && c1<=n-1)
        {
             c[r1][c1-1]='*';
            c[r2][c2-1]='*';
        }
        else{
            c[r1][c2]='*';
            c[r2][c1]='*';
        }
        f(i,n)
        {
            f(j,n)
            {
                cout<<c[i][j];
            }
            cout<<endl;

        }
    }
    return 0;
}

