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
    int p,q,n;
    cin>>n;
    cin>>p;
    vi v;
    f(i,p)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    if(p==0&&q==0)
    {
        cout<<"Oh, my keyboard!"<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    lli cnt=1,t=1;
    lli len=v.size();

    if(v[len-1]<n)
    {
        cout<<"Oh, my keyboard!"<<endl;
        return 0;
    }
    else
    {
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=cnt)
        {
            if(v[i]>cnt)
            {
                t=0;
                break;
            }
            else
            {
                continue;
            }
        }
        else
        {
            cnt++;
        }

    }
    }
    if(t==1)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;



    return 0;
}

