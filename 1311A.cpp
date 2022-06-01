#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        if (a==b)
            cout<<"0"<<endl;
        else if(a>b)
        {
            lli rslt=a-b;
            if(rslt%2==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
        {
              lli rslt=b-a;
            if(rslt%2==0)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
    }
}
