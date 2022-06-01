#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define f(i,n) for(int i=0;i<n;i++)
const double pie=3.1415;
int main()
{
    lli t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s.size();
        int l=s[n-1];
        if(l%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }


    }

    return 0;
}
