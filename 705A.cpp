#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=1;i<=n-1;i++)
const lli maxn=1000005;
int main()
{
    int t,n;
    string s="I hate it";
    string s1="I hate that";
    string s2="I love it";
    string s3="I love that";

    cin>>n;
    lli ara[n+1];
    int i;
    if(n==1)
    {
        cout<<s<<endl;
        return 0;
    }
    else
    {
     for( i=1;i<=n-1;i++)
        {
            if(i%2==1)
            {
                cout<<s1<<" ";
            }
            if(i%2==0)
            {
                cout<<s3<<" ";
            }
        }
        if(i%2==0)
        cout<<s2<<endl;
        else
        cout<<s<<endl;
    }
    return 0;
}

