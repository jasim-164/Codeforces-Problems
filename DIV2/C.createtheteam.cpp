#include<bits/stdc++.h>
using namespace std;
void team(int n,int x,int *ara)
{     int count=0,team=n/2,count1=0;
        for(int i=0;i<n;i++)
        {
            if(ara[i]*1>=x)
            {
                count++;
            }
            if(ara[i]*2>=x)
            {
                count1++;
            }
        }
        if(count>=count1)
        {
            cout<<count<<endl;

        }

        else if(count1>=count)
        {
          if(count1==1)
          {
              cout<<count1<<endl;
          }
          else
          {
            cout<<count1/2<<endl;
          }
        }

}
int main()
{
    int t,n,x,ara[100000];
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        team(n,x,ara);
    }
    return 0;
}
