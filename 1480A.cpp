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
    lli t;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;

        lli n=s.size();
        sort(s.begin(),s.end());
        cout<<s<<endl;
       // lli t=0,p=97;
       char p='a';
        lli b[500];
        memset(b,1,sizeof(b+500));
        char ini,f;
        f(i,n)
        {
            lli r=s[i];
            cout<<r<<endl;
            if(b[r]==1)
            {
            b[r]=0;
            if(s[i]==p)
            {
             p=p+32;
            }
            else
            {
                ini=p;
                break;
            }
            }
        }
        cout<<ini;
        lli q=122;
        for(int i=n-1;i>=0;i++)
        {
            if(b[s[i]]==1)
            {
                b[s[i]]=0;
                if(s[i]==q)
                {
                    q--;
                }
                else
                {
                    f=s[i];
                }
            }

        }
        f(i,n)
        {
            if(i%2==0)cout<<ini;
                else cout<<f;
        }
        cout<<endl;


    }


    return 0;
}
