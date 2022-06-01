#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int k=1;
        int step=0;
        int ans=0;
        while(ans<x)
        {
            ans=ans+k;
            k++;
            step++;

        }
        if(ans=x+1)
        {
            step++;
        }

        cout<<step<<endl;
    }
    return 0;
}
