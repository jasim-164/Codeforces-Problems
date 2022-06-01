#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int sum=0;
        if(n<=2)
        {
            cout<<"1"<<endl;
            continue;
        }
        else
        {
            sum++;
            n-=2;
         sum+=(n/x);
        if(n%x!=0)
            sum++;
        cout<<sum<<endl;

        }
    }
    return 0;
}
