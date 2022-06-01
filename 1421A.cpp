#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cout<<((a|b)&(~a|~b)) <<endl;
    }
    return 0;
}
