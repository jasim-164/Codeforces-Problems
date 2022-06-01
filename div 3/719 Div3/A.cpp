#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        map<char,int>mp;
        int b=0;
        mp[s[0]]++;
        for(int i=1;i<n;i++)
        {
            if((s[i]!=s[i-1])&& mp[s[i]])
            {
                b=1;
                break;
            }
            mp[s[i]]++;
        }
        if(b)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }
}
