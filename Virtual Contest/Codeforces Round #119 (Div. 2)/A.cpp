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
   int a,b,c;
  cin>>n>>a>>b>>c;
  vector<int>v;
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);
  sort(v.begin(),v.end());

  //cout<<v[0];
  int rslt=n/v[i];

  //cout<<rslt<<endl;
  int d=0;
  if(n%v[0]!=0)
  {
      for(int i=1;i<=2;i++)
  {

      int r=n%v[0];

      rslt+=(r/v[1]);
  }
  else
  cout<<rslt<<endl;
  }




    return 0;
}


