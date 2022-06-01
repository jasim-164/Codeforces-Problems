#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        if(s[0]=='*')cnt++;
        if(s[n-1]=='*')cnt++;
        int len=0,ini=0,f;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                t=1;
                ini=i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                if(i-ini<=k)
                    cnt++;
                else
                    break;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

