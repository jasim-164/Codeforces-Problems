#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<int>v(n);
        int p,k,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            v.push_back(p);
        }

        for(int i=0;i<v.size();i++)
        {
            k=x;
         if(v[i]%x!=1)
        {
            while(k--)
            {
            v.push_back(v[i]/x);
            }
        }
        else{
            break;
        }
        }
        for(itr : v)
            sum+=itr;
        cout<<sum<<endl;
    }
    return 0;
}
