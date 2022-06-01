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
        int ara [n+1];
        for(int i=0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);
        int dis=fabs(ara[1]-ara[0]);
        int pos=0,pos1=1,x=ara[0],y=ara[1];
        for(int i=1;i<n-1;i++)
        {
            if(abs(ara[i]-ara[i+1])<dis)
            {
                dis=abs(ara[i]-ara[i+1]);
                pos=i;
                pos1=i+1;
                x=ara[i];
                y=ara[i+1];
            }
        }
        cout<<x<<" ";
        for(int i=pos1+1;i<n;i++)cout<<ara[i]<<" ";
        for(int i=0;i<pos;i++)cout<<ara[i]<<" ";
        cout<<y<<endl;

    }

    return 0;
}
