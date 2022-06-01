#include<bits/stdc++.h>
using namespace std;
void subsequence(int *ara,int *ara1,int n,int m)
{
    int t;
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<m; k++)
        {
            t=0;
            if(ara[i]==ara1[k])
            {
                cout<<"YES"<<endl;
                cout<<"1"<<" "<<ara[k]<<endl;
                t=1;
                break;
            }
        }
          if(t==1)
            {
                break;
            }
    }
    if(t==0)
    {
        cout<<"NO"<<endl;
    }

}

int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ara[n+1],ara1[m+1];
        for(int i=0; i<n; i++)
            cin>>ara[i];
        for(int i=0; i<m; i++)
            cin>>ara1[i];
        subsequence(ara,ara1,n,m);


    }
}
