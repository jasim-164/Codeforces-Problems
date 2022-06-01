#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[101][101];
    int n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>c[i][j];
            }
        }
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(c[i][m-1]=='R')
                cnt++;
        }
        for(int j=0;j<m-1;j++)
        {
           if(c[n-1][j]=='D')
                cnt++;
        }
        cout<<cnt<<endl;

    }
}
