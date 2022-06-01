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
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        string s1=s;
        sort(s1.begin(),s1.end());
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

