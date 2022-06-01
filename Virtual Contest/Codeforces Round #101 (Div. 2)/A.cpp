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
    string a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    a+=b;
    sort(a.begin(), a.end());
    map<char,int>p,q;
    if(a.size()!=s.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool b=true;
    for(int i=0;i<a.size();i++)
        if(a[i]!=s[i])
        {
            b=false;
            break;
        }
        if(b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}


