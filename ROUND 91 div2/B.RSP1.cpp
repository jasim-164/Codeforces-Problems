#include<bits/stdc++.h>
using namespace std;
void rmp()
{
    string s;
    cin>>s;
    int n=s.size();
    int r1=0,s1=0,p1=0;
    for(int i=0;i<n;i++)
    {
        if (s[i]=='R')
        {
            r1++;
        }
        else if(s[i]=='S')
        {
            s1++;
        }
        else
        {
           p1++;
        }
        //cout<<r1<< " "<<s1<< " "<<p1<<endl;
    }

        if(s1>=r1&&s1>=p1)
    {
        for(int i=0;i<n;i++)
        cout<<"R";
        cout<<endl;
    }
     else if(p1>=r1&&p1>=s1)
    {
        for(int i=0;i<n;i++)
        cout<<"S";
        cout<<endl;
    }
    else
    {
       for(int i=0;i<n;i++)
        cout<<"P";
        cout<<endl;
    }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        rmp();
    }
}
