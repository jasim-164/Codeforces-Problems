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
        string a,s;
        cin>>a>>s;
        lli n1=a.size();
        lli n2=s.size();
        /*
        lli val1=stoi(a);
        //cout<<val1<<endl;
        lli val2=stoi(s);

         if(val1==val2)
        {
            cout<<"0"<<endl;
        }
           else if(val1>val2)
        {
            cout<<"-1"<<endl;
        }
        else
        {*/
            lli j=n1-1;//a
            vector<char>v;
            bool b=true;
            int i;
            for( i=n2-1;i>=0;i--)
            {
                if(j<0)
                {
                   v.push_back(s[i]);
                   continue;
                }
                if(j-i>0 )
                {
                     b=false;
                     break;
                }
                int vs=s[i]-'0';
                int va=a[j]-'0';
                if(vs>=va)
                {
                    char c=48+(vs-va);
                    v.push_back(c);

                }
                else{
                    if(i-1>=0)
                    {

                       int val=(s[i-1]-'0')*10+(s[i]-'0')*1;
                       if(val-va>9 or val-va<0)
                       {
                           b=false;
                           break;
                       }
                       else
                       {
                          val=val-va;
                        char c=48+(val);
                        v.push_back(c);
                        i--;

                       }
                    }
                    else{
                           b=false;
                           break;
                    }
                }
                j--;
            }

            if(b==false)
            {
                cout<<"-1"<<endl;
                continue;
            }
            else{
            lli p=v.size()-1;
            int t=0;
            for(int i=p;i>=0;i--)
            {
                if(v[i]!='0')
                {
                    t=1;
                }
                 if(t==1)
                 {
                     cout<<v[i];
                 }

            }
            cout<<endl;

            v.clear();

        }

    }
    return 0;
}


