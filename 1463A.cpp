#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int sum1=0,sum2=0,sum3=0,sum=0;
        if(a!=1)
        {
            sum1=a-1;
        }
        if(b!=1)
        {
            sum2=b-1;
        }
        if(c!=1)
        {
            sum3=c-1;
        }
        sum=sum1+sum2+sum3;
        if((sum+1)%7==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
