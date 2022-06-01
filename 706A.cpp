#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli a,b;
    cin>>a>>b;
    lli n;
    cin>>n;
    double min_=INT_MAX;
    for(int i=0;i<n;i++)
  {
      lli x,y,v;
      cin>>x>>y>>v;
      double rslt=sqrt(pow(a-x,2)+pow(b-y,2));
      double ans=(rslt*1.0)/v;
      min_=min(min_,ans);
  }
  cout<<setprecision(20)<<min_<<endl;
    return 0;
}

