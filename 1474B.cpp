#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mx 1000000
bool b[mx];
vector<lli>v;
void prime_check()
{
    b[0]=b[1]=1;
   lli q=sqrt(mx);
   for(int i=2;i<=q;i++)
   {
       if(b[i]!=1)
       {
           for(int j=i+i;j<=mx;j+=i)
           {
              b[j]=1;
           }
       }
   }
  /* for(int i=2;i<=mx;i++)
   {
       if(b[i]!=1)
        v.push_back(i);
   }*/

}
void solve(lli d)
{
    lli p1,p2;
    lli c=d;
    while(1)
    {
      if(b[c]!=1)
      {
          if(c>d)
          {
            p1=c;
            break;
          }
          else
          {
              c++;
          }
      }
      else
      {
          c++;
      }
    }
     c=p1;
      while(1)
    {
      if(b[c]!=1)
      {
          if(c>=d+p1)
          {
              p2=c;
              break;
          }
          else
          {
              c++;
          }
      }
      else
      {
          c++;
      }
    }
    lli ans=p1*p2;
    cout<<ans<<endl;


}

int main()
{
    lli t,d;
    cin>>t;
    prime_check();

    while(t--)
    {
        cin>>d;
        solve(d);
    }
    return 0;
}
