#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
       int x=0,shot=0;
       shot=a+b+c;
       x=shot%3;
       a=a-x;
       b=b-x;
       c=c-x;
       if(a<=0||b<=0||c<=0)
       {
           cout<<"NO"<<endl;
           break;
       }
       if(a+b+c+1%7)
       {
           cout<<"YES"<<endl;
           break;
       }

    }
    return 0;
}

