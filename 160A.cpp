#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int ara[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    //cout<<sum<<endl;
    sort(ara,ara+n);
    int s=0,coin=0;
    for(int i=n-1;i>=0;i--)
{
    s+=ara[i];
    //cout<<s<<endl;
    if(s>sum/2)
    {
      coin++;
      break;
    }
    else
    {
       coin++;
    }
}
cout<<coin<<endl;

 return 0;
}
