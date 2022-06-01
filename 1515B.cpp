#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int t=1;
        if(n%2==0)
        {
            if(ceil(1*sqrt(n/2))==floor((1*sqrt(n/2))))
               {
                   cout<<"YES"<<endl;
                   continue;
               }
        }
        if(n%4==0)
        {
            if(ceil((1*sqrt(n/4)))==floor((1*sqrt(n/4))))
               {
                   cout<<"YES"<<endl;
                   continue;
               }
        }

            cout<<"NO"<<endl;
    }


    return 0;

}

