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
        if(a<b)cout<<b-a<<endl;
        else if(a%b==0)cout<<0<<endl;
        else
        {
           int r=a%b;
           lli rslt=(b-r);
           cout<<rslt<<endl;
        }
    }


    return 0;
}

