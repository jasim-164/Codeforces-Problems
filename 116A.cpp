#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    int sum=0;
    int rslt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        sum-=a[i];
        sum+=b[i];
        rslt=max(sum,rslt);

    }
    cout<<rslt<<endl;




    return 0;
}
