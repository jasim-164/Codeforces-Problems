#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int rslt=min(m,n);
    if(n==1||m==1)
        cout<<"Akshat"<<endl;
    else if(rslt%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
    return 0;
}
