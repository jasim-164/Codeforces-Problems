#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int ara[n+1],sum=0,rslt[n+1];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
            rslt[i]=0;
        }
        if(sum==x)
        {
            cout<<"NO"<<endl;

        }
        else
        {
            sum=0;
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
               for(int j=0;j<n;j++)
               {
                  if(rslt[j]!=0)continue;
                  if(sum+ara[j]!=x)
                  {
                      v.push_back(ara[j]);
                      rslt[j]=1;
                      sum+=ara[j];
                      break;
                  }
               }
            }
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;

}
