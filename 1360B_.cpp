#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,rslt;
    cin>>n;
    int ara[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int m=ara[n-1]-ara[0];
    rslt=m;

    for(int j=0;j<n-1;j++)
    {
         rslt=min(rslt,ara[j+1]-ara[j]);
        //cout<<rslt<<endl;
    }
    cout<<rslt<<endl;
}

  return 0;
}

