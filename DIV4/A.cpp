#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int count=0,p=0;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='0')
           {
                p++;
           }
           if(s[i]=='1')
           {
               p--;
           }

           if(p==4)
            {
                p=0;
            }
            else if(p==-1)
            {
                p=3;
            }


        }
        if(p==0)
        {
          cout<<"E"<<endl;
        }
        else if(p==1)
        {
          cout<<"S"<<endl;
        }
        else if(p==2)
        {
          cout<<"W"<<endl;
        }
        else if(p==3)
        {
          cout<<"N"<<endl;
        }
    }
}
