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
    int t,n,k;
    bool b[200];
    memset(b,true,sizeof(b));
    b[0]=b[1]=false;
    for(int i=2;i<sqrt(200);i++)
    {
        if(b[i])
        {
        for(int j=i*i;j<=200;j+=i)
        {
            b[j]=false;
        }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>k;
        string s;
        cin>>s;
        map<char,lli>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        char val;
        int test=0;
        for(auto itr : mp)
        {
            if(itr.first=='1' or itr.first=='4' or itr.first=='6' or itr.first=='8' or itr.first=='9')
            {
                val=itr.first;
                cout<<"1"<<endl;
                cout<<val<<endl;
                test=1;
                break;
            }
        }
        if(!test)
        {
        for(int i=0;i<k-1;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                string s1="";
                s1+=s[i];
                s1+=s[j];
                int val=stoi(s1);
                if(!b[val])
                {
                    cout<<2<<endl;
                    cout<<val<<endl;
                    test=1;
                    break;
                }
            }
            if(test)
            break;
        }
        }

    }
    return 0;
}

