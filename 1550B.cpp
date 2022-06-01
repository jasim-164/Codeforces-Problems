#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int cnt=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                cnt++;
            }
        }
        if(b>0)
        {
            int rslt=a*n+b*n;
            cout<<rslt<<endl;
        }
        else
        {
            int rslt=a*n+ceil((cnt+1)*1.0/2)*b;
            cout<<rslt<<endl;
        }
    }
    return 0;
}
