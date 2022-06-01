
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
        n=s.size();
        lli ara[n+1];
        //vector<char>v;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int temp=0;
           for(int i=0;i<n;i++)
        {
            if(mp[s[i]]>1)
            {
                mp[s[i]]--;
            }
            else{
                temp=i;
                break;
            }

        }
        for(int i=temp;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

