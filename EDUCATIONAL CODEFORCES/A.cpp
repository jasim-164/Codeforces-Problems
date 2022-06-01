#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int rslt=0;
        if(k==1)
            cout<<"1"<<endl;
        else if(n==1)
            cout<<k<<endl;
        else if(n==k)
            cout<<"1"<<endl;
        else if(n<=k)
        {
            if(k%n==0)
            {
                rslt=k/n;
                cout<<rslt<<endl;
            }
            else{
               rslt=k/n+1;
               cout<<rslt<<endl;
            }
        }
        else{
            if(n%k==0)cout<<"1"<<endl;

               else cout<<"2"<<endl;
        }
    }

    return 0;
}

