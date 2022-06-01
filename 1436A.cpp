#include<bits/stdc++.h>
using namespace std;
void reorder(double ara[],int n,int m)
{
    sort(ara,ara+n);
    double sum=0,tr;
      for(int i=0;i<n;i++)
      {
        for(int j=i;j<n;j++)
        {
            sum+=(ara[j])/(j+1);
        }
      }
      //cout<<sum<<endl;
      if(sum==m)
      {
          cout<<"YES"<<endl;
          cout<<flush;
      }
      else
      {
          cout<<"NO"<<endl;
          cout<<flush;
      }
      return ;
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        double ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        reorder(ara,n,m);
    }
    return 0;
}
