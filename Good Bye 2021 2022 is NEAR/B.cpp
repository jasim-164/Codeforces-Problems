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
        string s;
        cin>>s;
        int pos=n-1;
        int temp=0;
        for(int i=0;i<=n-1;i++)
        {
            if(s[i]==s[i+1] && s[i]==s[0])
            {
                pos=i;
                break;
            }
            if(s[i]>=s[i+1])
            {
                pos=i;

            }
            else
            {
                pos=i;
                break;
            }
        }
        string t="";
        for(int i=0;i<=pos;i++)
            t+=s[i];

        for(int i=pos;i>=0;i--)
            t+=s[i];


        cout<<t<<endl;


    }
    return 0;
}
