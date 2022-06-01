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
    int n;
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size())
        cout<<"NO"<<endl;
    else
    {
        bool b=true;
        int pos=0,pos1=n-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                  pos=i;
                  break;
            }

        }
          for(int i=s.size();i>=0;i--)
        {
            if(s[i]!=t[i])
            {
                pos1=i;
                break;
            }

        }
        swap(s[pos],s[pos1]);

        if(s==t)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }

    return 0;
}


