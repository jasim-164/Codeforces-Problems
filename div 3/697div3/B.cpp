#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define f(i,n) for(int i=0;i<n;i++)

int main()
{
    lli p,t,n,n1=2020,n2=2021;
    cin>>p;
    while(p--)
    {
        cin>>n;
        p=0;
        f(i,1000)
        {
                f(j,1000)
                {
                    if(n1*i+n2*j==n)
                    {
                        cout<<"YES"<<endl;
                        t=1;
                        break;
                    }
                }

                    if(t==1)
                    {
                        break;
                    }
        }
        if(t!=1)
        {
           cout<<"NO"<<endl;
        }

    }

    return 0;
}

