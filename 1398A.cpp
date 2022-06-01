#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t,ara[100000];
  cin>>t;
  while(t--)
  {
      int temp=0;
      cin>>n;
      for(int i=1;i<=n;i++)
        cin>>ara[i];

      for(int i=1;i<=n-2;i++)
      {
          int j=i+1;
          int k=i+2;
           if(ara[i]+ara[j]<ara[k])
           {
               cout<<i<<" "<<j<<" "<<k<<endl;
               temp=1;
               break;
            }
      }
        if(temp==0)
      {
          cout<<"-1"<<endl;
      }
  }


    return 0;
}
