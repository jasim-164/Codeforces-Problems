#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define f(i,n) for(int i=0;i<n;i++)
int main()
{
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli a=n-1,b=n;
        lli i=1;
        cout<<"2"<<endl;
    while(i<n)
    {
        b=(a+b+1)/2;
        cout<<b<<" "<<a<<endl;
        a--;
        i++;
    }
    }
    return 0;
}
