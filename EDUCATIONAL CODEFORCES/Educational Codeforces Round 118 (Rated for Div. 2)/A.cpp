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
    string x1,x2;
    lli p1,p2;
    cin>>x1>>p1>>x2>>p2;
    lli n1=x1.size();
    lli n2=x2.size();

    if(x1==x2 && p1==p2)
    {
        cout<<"="<<endl;

    }
     else if(n1+p1>n2+p2)
    {
        cout<<">"<<endl;

    }
     else if(n1+p1<n2+p2)
    {
        cout<<"<"<<endl;

    }
    else
    {
        bool b=true;
        int min_=min(n1,n2);
        int p=max(n1,n2);
        string check;
        if(n1>n2)
        {
             check =x1;
        }
        else
        {
             check =x2;
        }
        for(int i=0;i<p;i++)
        {
            if(i>=min_)
            {
                if(check[i]!='0')
                {
                     b=false;
                     break;
                }

            }
            else
            {
                if(x1[i]!=x2[i])
                {
                     b=false;
                     break;
                }
            }
        }
        if(b)
        cout<<"="<<endl;

        else if(x1>x2)
        {
            cout<<">"<<endl;

        }
        else
        {
            cout<<"<"<<endl;
        }
    }

    }
    return 0;
}


