#include<bits/stdc++.h>
#define long long int=llt;
const int max_=2147483647;
const int min_=-2147483648;
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        int a=1,b=x,c=y;
        if(x==max(a,b) && y==max(a,c) && z==max(b,c))
        {
            cout<<" YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<" NO"<<endl;
        }
    }
    return 0;
}

