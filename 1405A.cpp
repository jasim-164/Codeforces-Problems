#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      int ara[n+1];
      for(int i=0;i<n;i++)
      {
          cin>>ara[i];
      }
      int ara2[n+1];
      for(int j=0;j<n-1;j++)
      {
          ara2[j]=ara[j]+ara[j+1];
          cout<<ara2[j]<<endl;
      }
      //sort(0,ara[n]);
  }

    return 0;
}
