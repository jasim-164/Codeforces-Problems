#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int cnt=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='a')
                cnt++;
        }
           if(len==cnt)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int f=0;
         for(int i=0;i<len;i++)
        {
            if(s[i]=='a')
                f++;
            else
                break;
        }
        int b=0;
            for(int i=len-1;i>=0;i--)
        {
            if(s[i]=='a')
                b++;
            else
                break;
        }
        if(f>b)
        {
            cout<<"YES"<<endl;
            cout<<"a"<<s<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<s<<"a"<<endl;
        }
    }
    return 0;
}
