#include<bits/stdc++.h>
using namespace std;
void solve(int n,string s,string t)
{
    bool one=false,zero=false;
    string s1="";
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0' and t[i]=='0')
            s1+='0';
        else if(s[i]=='1' and t[i]=='1')
            s1+='1';
        else
        {
            s1+='2';
        }
    }
    int sum=0;

    for(int i=0; i<n; i++)
    {
        if(s1[i]=='2')
        {
            sum+=2;
        }
        else if(s1[i]=='0')
        {
            if(s1[i+1]=='1')
            {
                sum+=2;
                i++;
            }
            else
                sum++;

        }
        else if(s1[i]=='1')
        {
            if(s1[i+1]=='0')
            {
                sum+=2;
                i++;
            }

        }
    }


    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        solve(n,s,t);
    }
    return 0;
}

