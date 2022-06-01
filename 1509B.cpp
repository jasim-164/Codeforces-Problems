#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        //string pat="TMT";
        int t=0,m=0;
        for(int i=0;i<=n-1;i++)
        {
            if(s[i]=='T')t++;
            else m++;
        }
        if(t!=2*m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int cnt=0;
       for(auto itr: s)
       {
           if(itr=='T')
           {
               cnt++;
           }
           else
           {
               cnt--;
           }
           if(cnt<0)
           {
               cout<<"NO"<<endl;
               break;
           }
       }
       if(cnt<0)
       {
           continue;
       }
       cnt=0;
       for(int i=n-1;i>=0;i--)
       {
             if(s[i]=='T')
           {
               cnt++;
           }
           else
           {
               cnt--;
           }
           if(cnt<0)
           {
               cout<<"NO"<<endl;
               break;
           }
       }
       if(cnt>=0)
       cout<<"YES"<<endl;


    }
}
