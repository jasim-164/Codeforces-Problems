
#include <bits/stdc++.h>

using namespace std;
int Jos(int n,int m)
{
    if(n==1)
        return 1;
    return ((Jos(n-1,m)+m-1)%n)+1;
}
int main()
{
    int n,k,x;
    cin>>n>>k;
    cout<<Jos(n,k)<<endl;
    return 0;
}
