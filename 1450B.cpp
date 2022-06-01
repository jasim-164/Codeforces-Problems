#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x[1000],y[1000],n,k;
    int t;
    cin>>t;
    while(t--)
    {
        int test=0,p=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            if(abs(x[i]-x[j])+abs(y[i]-y[j])<=k)
            {
                test=1;
            }
            else{
                test=-1;
                break;
            }
            }
            if(test==1)
        {
            cout<<"1"<<endl;
            p=1;
            break;
        }
        }
        if(p==0){
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
