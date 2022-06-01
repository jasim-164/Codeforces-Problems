#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        if(n<9)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            cnt++;
            n-=9;
            n/=10;
            cnt+=n;

        }
        cout<<cnt<<endl;
    }
    return 0;
}
