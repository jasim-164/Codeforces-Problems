#include<bits/stdc++.h>
using namespace std;
void team()
{
    int n,x,i;
    cin>>n>>x;
   //vector< set<int,greater<int>>>ara(n+1);
    int ara[n+1];
    for( i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    sort(ara+1,ara+n+1);
    //for( i=1;i<=n;i++)
    //cout<<ara[i]<<endl;
    int c=0,team=0;
     for(int i=n;i>=1;i--)
     {
         c++;
         if(ara[i]*c>=x)
         {
             team++;
             c=0;
         }

     }
     cout<<team<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        team();
    }
    return 0;
}
