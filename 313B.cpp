#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            cnt++;
            dp[i]=cnt;
    }
    int m;
    cin>>m;

    while(m--)
    {
        int l,r;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;

    }
    return 0;
}
