#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    bool one=false,zero=false;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            one=true;
        else
            zero=true;
    }
    if(!zero)
    {
        cout<<"0"<<endl;
    }
     else if(!one )
    {
        cout<<"1"<<endl;
    }
    else
    {
        //first occurence find pos s[i]=0
        int pos=-1,pos1=-1;
        int delta=0;
         for(int i=0;i<n;i++)
         {
              if(s[i]=='0')
             {
                 pos=i;
                 break;
             }
         }
         //last occurence of s[i]==0
           for(int i=n-1;i>=0;i--)
         {
              if(s[i]=='0')
             {
                 pos1=i;
                 break;
             }
         }
         for(int i=pos;i<=pos1;i++)
         {
             if(s[i]=='1')
                delta=1;
         }
         if(delta)
            cout<<2<<endl;
         else
            cout<<1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}
