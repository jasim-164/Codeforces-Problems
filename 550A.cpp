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
    string s;
    cin>>s;
    n=s.size();
    int cnt=0,cnt1=0;

        for(int i=0;i<n-1;i=i+2)
        {
            if(s[i]=='A')
            {
                if(s[i+1]=='B')
                {
                    cnt1++;
                }
            }
              if(s[i]=='B')
            {
                if(s[i+1]=='A')
                {
                    cnt++;
                }
            }
        }
        if(cnt>=1&&cnt1>=1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    return 0;
}

