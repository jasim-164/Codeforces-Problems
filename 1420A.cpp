#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ara[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        int b=false;
        for(int i=1;i<n;i++)
        {
            if(ara[i-1]<=ara[i])
            {
                b=true;
                break;
            }
        }
        cout<<(b? "YES":"NO")<<endl;

    }
    return 0;
}
