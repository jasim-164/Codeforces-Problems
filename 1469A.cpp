
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int s1=0,s2=0,s3=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
           if(s[i]=='(')
           {
               s1=s1+1;
           }
            else if(s[i]==')')
           {
               s2=s2+1;
           }
           else
           {
               s3=s3+1;
           }
        }
        if(s[0]==')' || s[n-1]=='(')
        {
           cout<<"NO"<<endl;
        }
        else if(s3!=0)
        {
        if(abs(s1-s2)==0)
        {
            if(s3%2==0)
            {
             cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(s3==abs(s1-s2))
        {
             cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        }
        else
           {
               if(abs(s1-s2)==0)
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                  cout<<"NO"<<endl;
               }
           }
    }


    return 0;
}
