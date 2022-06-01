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
        int n;
        cin>>n;
        string s[n+1];
        f(i,0,n-3)//2 less
        {
            cin>>s[i];
        }
        char c=s[0][0];
        string s1="";
        s1+=c;
        //cout<<s1<<endl;
        if(n==3)
        {
            s1=s[0];
            s1+='a';
            cout<<s1<<endl;
            continue;
        }
        else
        {

        bool b=true;
        int pos=0;
          f(i,0,n-4) //n-3
        {
            if(s[i][1]==s[i+1][0])
            {

                    s1+=s[i][1];
            }
            else
            {
              b=false;
              s1=s1+s[i][1];
              s1=s1+s[i+1][0];
              pos=i;
            }
        }
        if(b)
        {
            s1+=s[n-3][1];
            //s1+=s[n-3][1];
            s1+='b';
            cout<<s1<<endl;
        }
        else
        {
            s1+=s[n-3][1];
            cout<<s1<<endl;
        }
        }


    }
    return 0;
}


