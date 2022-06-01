#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    while(t--)
    {
        lli n;
        cin>>n;
        while(n%2==0)
        {
            n/=2;
        }
        cout<<(n>1 ? "YES" : "NO")<<endl;
    }
    return 0;
}
