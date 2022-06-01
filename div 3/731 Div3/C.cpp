#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,m;
        cin>>k>>n>>m;
        int a[n+1],b[m+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
          for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int i=0,j=0;
        bool bo=true;
        vector<int>ans;
        while(i!=n or j!=m)
        {
            if(i<n && a[i]==0)
            {
                ans.push_back(a[i++]);
                k++;
            }
            else if(j<m && b[j]==0)
            {
                ans.push_back(b[j++]);
                k++;
            }
                else if(j<m && b[j]<=k)
            {
                ans.push_back(b[j++]);

            }
                else if(i<n && a[i]<=k)
            {
                ans.push_back(a[i++]);
            }

            else
            {
                bo=false;
                break;
            }
        }
        if(bo==false)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(auto itr:ans)
                cout<<itr<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
