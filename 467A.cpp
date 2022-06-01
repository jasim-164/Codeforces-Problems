#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pi,qi,n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    cin>>pi>>qi;
    if((qi-pi)>=2)
        count++;
    }
    cout<<count<<endl;
    return 0;
}
