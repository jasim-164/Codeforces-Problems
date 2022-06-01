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
        cin>>n;
        vector<string>v;
        int num=n;
        int p=0;
        f(i,0,n-1)
        {
            string s="";
            f(j,0,num-1)
            {

                s+='(';
            }
             f(j,0,num-1)
            {
                s+=')';
            }
            for(int k=0;k<p;k++)
            {
                if(k%2==0)
                    s+='(';
                else
                    s+=')';
            }
            v.push_back(s);
            num--;
            p+=2;
        }
        for(auto itr:v)
            cout<<itr<<endl;
    }
    return 0;
}


