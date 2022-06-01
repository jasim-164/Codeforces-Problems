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
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int n=stoi(s);
        if(n%7==0)
        {
            cout<<s<<endl;
        }
        else
        {

            if(n<7)
            {
                cout<<"7"<<endl;
            }
            else
            {
                int p=s[len-1]-'0';
                int rem=n%7;
                if(p+(7-rem)>9)
                {
                    n-=rem;
                    cout<<n<<endl;
                }
                else
                {
                   n+=(7-rem);
                   cout<<n<<endl;
                }
            }
        }
    }
    return 0;
}

