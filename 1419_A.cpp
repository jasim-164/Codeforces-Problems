#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"hello";
    int t,n;
    cin>>t;
    int rslt;
    while(t--)
    {
        cin>>n;
        char s[n+1];
        cin>>s;
        for(int i=n-1;i>=0;i--)
        {
           if(s[i]%2==0)
           {
               rslt=2;
           }
           else
           {
               rslt=1;
           }
        }
        cout<<rslt<<endl;
    }
    return 0;
}
