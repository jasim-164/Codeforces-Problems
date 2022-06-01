#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int nride=n*a;
    int p=n/m;
    int r=n%m;
    int mride=p*b+r*a;
    int nride_=p*b+b;
    cout<<min(nride,min(mride,nride_))<<endl;

    return 0;
}
