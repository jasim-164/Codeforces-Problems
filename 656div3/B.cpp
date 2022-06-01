#include<bits/stdc++.h>
#define long long int=llt;
const int max_=2147483647;
const int min_=-2147483648;
using namespace std;
void duplicate (int ara[],int size_)
{
    int prev=0;
    for(int i=0;i<size_;i++)
    {
        if(ara[i]!=ara[i+1])
        {
            ara[++prev]=ara[i];
        }
        ara[prev++]=ara[size_-1];
    }
    ara[prev++]=ara[size_-1];

  for(int i=0;i<size_;i++)
  {
      cout<<ara[i]<<" ";
  }
  cout<<endl;
  return ;
}
int main()
{
    int t,ara[10000];
    cin>>t;
    while(t--)
    { int n;
        cin>>n;
        for(int i=1;i<=2*n;i++)
        {
            cin>>ara[i];
        }
        int size_=2*n;
        duplicate(ara,size_);

    }
    return 0;
}

