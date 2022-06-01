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
        long long int count=0;
        while(n!=0)
        {
            if(n%k==0)
            {
                n=n/k;
                count++;
            }
            else
            {
                count+=n%k;
                 n-=(n%k);
            }
            //cout<<n<<" ";

        }
        cout<<count<<endl;
    }
    return 0;
}
