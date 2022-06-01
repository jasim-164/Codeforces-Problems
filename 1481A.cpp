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
    lli t,px,py;
    cin>>t;
    while(t--)
    {
        cin>>px>>py;
        string s;
        cin>>s;
        if(px==0&&py==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int len=s.size();
        int r=0,u=0,d=0,l=0;
        f(i,len)
        {
            if(s[i]=='R')r++;
            else if(s[i]=='U')u++;
            else if(s[i]=='D')d++;
            else if(s[i]=='L')l++;
        }
        if(px>=0&&py>=0)
        {
            if(px<=r&& py<=u)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
         else if(px<0&&py>=0)
        {
            if(abs(px)<=l&& py<=u)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
         else if(px<0&&py<0)
        {
            if(abs(px)<=l&& abs(py)<=d)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(px>=0&&py<0)
        {
            if(px<=r&& abs(py)<=d)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }


    return 0;
}
