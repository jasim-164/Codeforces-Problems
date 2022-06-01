#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{long long int t,n,ara[101];
cin>>t;
while(t--)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int po=0,neg=0,d;
    for(int i=0;i<n-1;i++)
    {
        d=(ara[1])-(-ara[i]);
        if(d>=0)
        {
            po++;
        }
        if(d<=0)
        {
            neg++;
        }
    }
      for(int i=0;i<n;i++)
      {
          if(po>=(n-1)/2 && neg>=(n-1)/2)
          {
             if(i%2==0)
             {
                 cout<<-ara[i]<<" ";
             }
             else{
                cout<<ara[i]<<" ";
             }
          }
          else{
            cout<<ara[i]<<" ";
          }
      }

}
    return 0;
}

