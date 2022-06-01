#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+1];
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];

        }
        for(int i=0;i<n;i++)
        {
            if(ara[i]==1)
                a++;
            else
                b++;

        }
        //cout<<"a="<<a<<"B="<<b<<endl;
        if((a+2*b)%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else if(a!=0&&b!=0)
        {
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
           else if((a+2*b)%2==0)
          {
            cout<<"YES"<<endl;
          }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(a!=0 && b==0)
        {
            if(a%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(a==0 && b!=0)
        {
            if(b%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
