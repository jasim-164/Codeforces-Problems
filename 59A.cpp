#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int s1=0,s2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s1++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s2++;
        }
    }
    if(s1==s2)
    {
         for(int i=0;i<s.size();i++)
         {
             if(s[i]>='A' && s[i]<='Z')
             {
                 s[i]=s[i]+32;
             }
         }
    }
    else if(s1>s2)
    {
          for(int i=0;i<s.size();i++)
         {
             if(s[i]>='A' && s[i]<='Z')
             {
                 s[i]=s[i]+32;
             }
         }
    }
    else
    {
          for(int i=0;i<s.size();i++)
         {
          if(s[i]>='a' && s[i]<='z')
             {
                 s[i]=s[i]-32;
             }
         }
    }
    cout<<s<<endl;
    //cout<<s1<<" "<<s2;
    return 0;
}
