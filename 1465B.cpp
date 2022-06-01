#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int temp=n,r=0;
        while(n!=0)
        {
            r=n%10;
            if(r!=0)
            {
            if(temp%r!=0)
            {
                temp+=1;
                n=temp;
            }
            else
            {
               n=n/10;
            }
            }
            else
            {
                n=n/10;
            }


        }
        cout<<temp<<endl;
    }
    return 0;
}

