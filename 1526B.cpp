#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        if(n%11==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            int q=0;
            while(n>=0)
            {
                if(n%11==0)
                {
                    cout<<"YES"<<endl;
                    q=1;
                    break;
                }
                if(n==0)
                {
                    cout<<"YES"<<endl;
                    q=1;
                    break;
                }
                n-=111;
            }
            if(!q)cout<<"NO"<<endl;

        }
    }
    return 0;
}
