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
    int t;
    //char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       map<char,int>mp;
       lli n=s.size();
       for(int i=0;i<n;i++)
       {
           mp[s[i]]++;
       }
       //sort(mp.begin(),mp.end());
       string p="";
       for(auto itr:mp)
       {
           if(itr.second==2)
           {
             p+=(itr.first);
             p+=(itr.first);
           }
           else
           {
             p+=itr.first;
           }

       }
       cout<<p<<endl;
    }
    return 0;
}


