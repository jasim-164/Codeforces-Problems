#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c0,c1,h;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>c0>>c1>>h;
        cin>>s;
        int sum=0;
         if(c0<c1&&c1>h)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    s[i]='0';
                    sum+=h;
                }
            }
            for(int i=0;i<n;i++)
            {
                sum+=c0;
            }
        }
        else if(c0>c1&&c0>h)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    s[i]='1';
                    sum+=h;
                }
            }
            for(int i=0;i<n;i++)
            {
                sum+=c1;
            }
        }
        else
        {
           for(int i=0;i<n;i++)
           {
               if(s[i]=='0')
               {
                   sum+=c0;
               }
               else
               {
                   sum+=c1;
               }
           }
        }

        cout<<sum<<endl;
    }

}
