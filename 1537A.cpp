#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n+1],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum==n)
        {
            cout<<"0"<<endl;
        }
        else if(sum>n)
        {
            cout<<sum-n<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
    return 0;
}
