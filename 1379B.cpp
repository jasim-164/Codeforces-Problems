#include<bits/stdc++.h>
#define long long int=llt;
const int max_=2147483647;
const int min_=-2147483648;
using namespace std;
void solve(int l,int r,int m)
{
    int a=l,b=r,c=l;
    int t;
    for(int n=1;n<=r;n++)
    {
        for(int c=l;c<=r;c++)
        {
            if(n*a+b-c==m)
            {
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
                t=1;
            }
            else if(n*a+a-c==m)
            {
                cout<<a<<" "<<a<<" "<<c<<endl;
                break;
                t=1;
            }

        }
          if(t==1)
            {
                break;
            }
    }
}

int main()
{
    int n,l,r,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r>>m;
        solve(l,r,m);

    }

    return 0;
}

