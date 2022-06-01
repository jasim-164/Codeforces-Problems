#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int test=0;
        if(s=="2020")
        {
            test=1;
        }
        else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
        {
            test=1;
        }
        else if(s[0]=='2' && s[1]=='0' &&s[n-2]=='2' && s[n-1]=='0')
        {
            test=1;
        }
         else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
        {
            test=1;
        }
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
        {
            test=1;
        }
         else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
        {
            test=1;
        }

        if(test==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;

}
